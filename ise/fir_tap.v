//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

module fir_tap(
	       input signed [15:0]      x_in,
	       output reg signed [15:0] x_out,
	       input signed [15:0]      h,
	       input [15:0]             y_in,
	       output [15:0]            y_out,
	       input                    rst,
	       input                    clk,
	       input                    clk_en
	       );

   wire signed [31:0] 			   prod;

   always @ (posedge rst, posedge clk) begin 
      if(rst) 
	x_out <= 16'b 0;
      else if (clk_en)
	x_out <= x_in;
   end 		
   
   assign prod = x_out * h; 
   assign y_out = prod[27:12] + y_in;

endmodule
