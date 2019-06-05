//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

`ifndef N
 `define N 8 //filter order
`endif

`ifndef fs
 `define fs 48000 //sample rate
`endif


module top_tb;

   // Inputs
   reg clk;
   reg rst;
   reg [3:0] freq_sel;

   // Outputs
   wire      detected;

   initial $display("top_tb N = %d", `N);
  
   // Instantiate the Unit Under Test (UUT)
   top #(.N(`N), .FS(`fs))
   uut (
	.clk(clk), 
	.rst(rst), 
	.sw(freq_sel), 
	.detected(detected)
	);

   initial begin

`ifdef LINUX
      $dumpfile("top.vcd");
      $dumpvars();
`endif 
     
      // Initialize Inputs
      clk = 0;
      rst = 0;
      freq_sel = 0;

      #5 rst = 1;
      #5 rst = 0;

      #100 freq_sel = 1;
      #(10*1E-3*1E9) freq_sel = 2;
      #(10*1E-3*1E9) freq_sel = 5;
      #(10*1E-3*1E9)freq_sel = 10;

      #(10*1E-3*1E9) $finish;
      
   end
   
   
   always #10 clk = ~clk;
endmodule

