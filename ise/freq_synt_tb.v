//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module freq_synt_tb;

   // Inputs
   reg clk;
   reg rst;
   reg [3:0] freq_sel;

   // Outputs
   wire      osc;

   // Instantiate the Unit Under Test (UUT)
   freq_synt uut (
		  .clk(clk), 
		  .rst(rst), 
		  .freq_sel(freq_sel), 
		  .osc(osc)
	          );

   initial begin

`ifdef LINUX
      $dumpfile("freq_synt.vcd");
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
      
   end
   
   
   always #10 clk = ~clk;
   
endmodule

