module alu_4bit (
    input [3:0] a,      // 4-bit input a
    input [3:0] b,      // 4-bit input b
    input [2:0] op,     // 3-bit operation control
    output [3:0] result,// 4-bit result
    output cout,   // Carry out
    output zero         // Zero flag
);

    reg [3:0] result_reg;
    reg carry_out, zero_reg;

    always @(*) begin
        case (op)
            3'b000: {carry_out, result_reg} = a + b;     // Addition
            3'b001: {carry_out, result_reg} = a - b;     // Subtraction
            3'b010: {carry_out, result_reg} = a & b;     // Bitwise AND
            3'b011: {carry_out, result_reg} = a | b;     // Bitwise OR
            3'b100: {carry_out, result_reg} = a ^ b;     // Bitwise XOR
            3'b101: {carry_out, result_reg} = ~a;        // Bitwise NOT (A)
            3'b110: {carry_out, result_reg} = {a[2:0], a[3]}; // Shift left (A)
            3'b111: {carry_out, result_reg} = {a[0], a[3:1]}; // Shift right (A)
            default: {carry_out, result_reg} = 5'b0;
        endcase

        zero_reg = (result_reg == 4'b0000);
    end

    assign result = result_reg;
    assign cout = carry_out;
    assign zero = zero_reg;

endmodule