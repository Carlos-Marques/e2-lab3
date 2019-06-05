//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

module detector_tb;

   // Inputs
   reg signed [15:0] probe;

   // Outputs
   wire              detected;

   // Instantiate the Unit Under Test (UUT)
   detector uut (
		 .probe(probe), 
		 .detected(detected)
	         );

   initial begin

`ifdef LINUX
      $dumpfile("detector.vcd");
      $dumpvars();
`endif 

      // Initialize Inputs
      probe = 0;

      // Wait 100 ns for global reset to finish
      #100;
      
      probe = 16'hFFFF;
      
      #100 probe = 16'h00FF;
      #100 probe = 16'h0FFF;
      #100 probe = 16'h7FFF;
      #100 probe = 16'h8000;
      #100 probe = 16'hA000;
      #100 probe = 16'hF000;
      #100 probe = 16'hF800;
      #100 probe = -1024;



      // Add stimulus here

   end
   
endmodule

