--
-- 
-- This module is the MIPS ALU 
--  
--
--   
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- *************************************************************************************************
-- *************************************************************************************************

entity MIPS_ALU is
Port(	
-- ALU operation control inputs
ALUOP		: in STD_LOGIC_VECTOR(1 downto 0);-- 00=add, 01=sub, 10=by Function
Funct		: in STD_LOGIC_VECTOR(5 downto 0);-- 32=ADD, 34=sub, 36=AND, 37=OR, 38=XOR, 42=SLT
-- data inputs & data control inputs
A_in		: in STD_LOGIC_VECTOR(31 downto 0);
B_in		: in STD_LOGIC_VECTOR(31 downto 0);
sext_imm	: in STD_LOGIC_VECTOR(31 downto 0);
ALUsrcB		: in STD_LOGIC;
-- data output
ALU_out		: out STD_LOGIC_VECTOR(31 downto 0)
	);
end MIPS_ALU;
 

architecture  Behavioral  of  MIPS_ALU  is
		   
-- *************************************************************************************************
-- *************************************************************************************************


-- inner signals
-- ====================================================
signal  ALU_cmd    : STD_LOGIC_VECTOR  (2 downto 0) ; -- 000=AND, 001=OR, 010=ADD, 011=XOR, 110=sub, 111=slt, 100,101= not used for now
signal  ALU_A_in   : STD_LOGIC_VECTOR  (31 downto 0);
signal  ALU_B_in   : STD_LOGIC_VECTOR  (31 downto 0);
signal  ALU_output : STD_LOGIC_VECTOR  (31 downto 0);



begin

ALU_A_in <= A_in;

-- enter your design here
process(sext_imm, B_in, ALUsrcB)
begin
	if ALUsrcB = '0' then
		ALU_B_in <= B_in;
	else
		ALU_B_in <= sext_imm;
	end if;
end process;


process(Funct, ALUOP)
begin
	case ALUOP is
		when b"00" => ALU_cmd <= b"010";
		when b"01" => ALU_cmd <= b"110";
		when b"10" =>
			case Funct is
				when b"100000" => ALU_cmd <= b"010"; -- Addition
				when b"100010" => ALU_cmd <= b"110"; -- Subtraction
				when b"100100" => ALU_cmd <= b"000"; -- AND
				when b"100101" => ALU_cmd <= b"001"; -- OR
				when b"100110" => ALU_cmd <= b"011"; -- XOR
				when b"101010" => ALU_cmd <= b"111"; -- SLT
			end case;
		end case;
end process;

process(ALU_cmd, ALU_A_in, ALU_B_in)
begin
	-- ALU_Out
	case ALU_cmd is
		when b"000" => ALU_out <= (ALU_A_in and ALU_B_in);
		when b"001" => ALU_out <= (ALU_A_in or ALU_B_in);
		when b"010" => ALU_out <= (ALU_A_in + ALU_B_in);
		when b"011" => ALU_out <= (ALU_A_in xor ALU_B_in);		
		--when b"100" => ALU_out <= (ALU_A_in nand ALU_B_in);
		--when b"101" => ALU_out <= (ALU_A_in nor ALU_B_in);
		when b"110" => ALU_out <= (ALU_A_in - ALU_B_in);
		when b"111" => 
			if conv_integer(ALU_A_in) < conv_integer(ALU_B_in) then
				ALU_out <= x"00000001";
			else
				ALU_out <= x"00000000";
			end if;
	end case;
end process;

end Behavioral;

-- *************************************************************************************************
-- *************************************************************************************************

