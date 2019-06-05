//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module freq_synt(
    input clk,
    input rst,
    input [3:0] freq_sel,
    output osc
    );

	reg [15:0] count, count_limit;
	
	always @ * begin
		case (freq_sel)
			0: count_limit = 0;
			1: count_limit = 50000;
			2: count_limit = 25000;
			3: count_limit = 16667;
			4: count_limit = 12500;
			5: count_limit = 10000;
			6: count_limit = 8333;
			7: count_limit = 7143;
			8: count_limit = 6250;
			9: count_limit = 5556;
			10: count_limit = 5000;
			11: count_limit = 4546;
			12: count_limit = 4167;
			13: count_limit = 3846;
			14: count_limit = 3571;
			15: count_limit = 3333;
			default: count_limit = 0;
			
		endcase
	end

	
	always @ (posedge clk, posedge rst) begin

		if (rst)
			count <= 0;
		else begin
			count <= count+1;
			if(count == count_limit -1) count <= 0;
		end
	
	end

	assign osc = (count <= (count_limit>>1))? 1 : 0;

endmodule
