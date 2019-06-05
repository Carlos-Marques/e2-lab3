//////////////////////////////////////////////////////////////////////////////////
// Instituto Superior Tecnico 
// Electronica II
// Trabalho sobre filtro digital FIR
// Autor: Jose T. de Sousa
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module detector(
    input signed [15:0] probe,
    output detected
    );

	assign detected = ((probe >= 2**11) || (probe <= -2**11 ))? 1 : 0;

endmodule
