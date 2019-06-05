//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

`define Fclk 50_000_000

`ifndef N
 `define N 8 //filter order
`endif

`ifndef FS
`define FS 48000 //sample rate
`endif

module top(
           input       clk,
           input       rst,
           input [3:0] sw,
           output      detected,
	   output      xpin,
	   output      ypin
           );
   
   parameter N=`N;
   parameter FS=`FS;

   wire [15:0]         y;
   wire                osc;
   wire signed [15:0]  x;
   
   reg [10:0]          count;
   wire                clk_en;
   
   initial begin 
      $display("top N = %d", N);
      $display("top FS = %d", FS);
   end
   
   assign xpin = x[15];
   assign ypin = y[15];
   
   //generate clk enable signal at sample frequency
   always @ (posedge clk, posedge rst)
     if(rst)
       count <= 0;
     else 
       count <= ( count ==  (`Fclk/`FS) )? 0 : (count + 1);
   
   assign clk_en = (count == 0);
   
   // instantiate the frequency synthesizer		
   freq_synt fsynt0 (
		     .clk(clk), 
		     .rst(rst), 
		     .freq_sel(sw), 
		     .osc(osc)
	             );
   
   //generate symmetric filter input
   assign x = (osc)? 4096 : -4096;

   //instantiate FIR filter
   fir_path #(.N(N)) fir0 (
		           .rst(rst), 
		           .clk(clk),
		           .clk_en(clk_en),
		           .x(x), 
		           .y(y)
		           );
   
   //instantiate amplitute detector	 
   detector detect0 (
		     .probe(y), 
		     .detected(detected)
	             );

   
endmodule
