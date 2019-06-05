//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps


`ifndef N
 `define N 10 //filter order
`endif

`ifndef FS
 `define FS 58000 //sample rate
`endif

`define Nsamples `FS/100 //samples to simulate


module fir_path_tb;

   integer i; //memory index

   //data memories
   reg [15:0] hmem [0:`N];
   reg [15:0] xmem [0:`Nsamples-1];

   // Inputs
   reg 	      rst;
   reg 	      clk;
   reg        clk_en;
   wire [15:0] x;
   
   // Outputs
   wire [15:0] y;

   real        Ts;
   integer     fout;

   // Instantiate the Unit Under Test (UUT)
   fir_path #(.N(`N)) uut (
		           .rst(rst), 
		           .clk(clk), 
		           .clk_en(clk_en),
		           .x(x),
		           .y(y)
		           );

   initial begin
      
`ifdef LINUX
      $dumpfile("fir_path.vcd");
      $dumpvars();
`endif 

      fout = $fopen("y.dec", "w");
      //compute sampling frequency according to timescale
      Ts = 1.0e9/`FS;

      // Initialize Inputs
      rst = 1;
      clk = 1;
      clk_en = 1;
      $readmemh("h.hex", hmem);
      $readmemh("x.hex", xmem);

      #(Ts+1) rst = 0;
   end
   
   assign x = xmem[i];
   
   //clock process
   always begin 
      #(Ts/2) clk = ~clk;
   end 	
   
   //process to increment memory index i and print result to file
   always @ (posedge clk, posedge rst) begin 
      if(rst) 
	i <= 0;
      else begin
	 i <= i+1;
	 if(i < `Nsamples) begin
	    $fwrite(fout, "%d\n", y);
	 end else begin
	    $fclose(fout);
	    $finish;
	 end 
      end
   end
endmodule

