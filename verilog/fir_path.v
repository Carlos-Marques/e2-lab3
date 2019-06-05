//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

module fir_path(
                input               rst,
                input               clk,
	        input               clk_en,
                input signed [15:0] x,
                output [15:0]       y
                );
   
   parameter N=8;
   
   wire [15:0]               x_l [N:0];
   wire [15:0]               y_l [N:0];

   reg signed [15:0]               h [N:0];
   
   // filter coefficients

   initial begin
      $display("fir_path N = %d", N);
      $readmemh("h.hex", h, 0, N);
      $display("h[0] = %x", h[0]);
   end
   
   //input termination
   assign x_l[0] = x;

   wire signed [31:0] prod = h[0]*x;
   assign y_l[0] = prod[27:12];

   //output termination
   assign y = y_l[N];

   //filter tap array
   genvar                    i; 
   generate
      for (i=0; i<N; i=i+1) begin: fir_path
	 fir_tap U (
		    .x_in(x_l[i]),
		    .x_out(x_l[i+1]),
		    .h(h[i+1]),
		    .y_in(y_l[i]),
		    .y_out(y_l[i+1]),
		    .rst(rst),
		    .clk(clk),
		    .clk_en(clk_en)
		    );
      end
   endgenerate

endmodule
