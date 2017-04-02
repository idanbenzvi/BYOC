---------------------------------------------------------------------------------
-- This is a seven segments decoder
-- 
-- It gets a 4 bit digit and determine which of the 7 segnments will be lit.
-- segment i is lit when  sevensed(i) is "0". It is off when sevensed(i) is "1".
-- Here is the segments arrangement:
--
--                 --0--
--                /    /
--               5    1
--              /    /
--             --6--
--            /    /
--           4    2
--          /    /
--          --3--
--
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity decoder_7seg is
    Port ( digit_data : in  STD_LOGIC_VECTOR (3 downto 0);
           sevenseg : out  STD_LOGIC_VECTOR (6 downto 0));
end decoder_7seg;

architecture Behavioral of decoder_7seg is

begin
	with digit_data  select 
		sevenseg  <=
		"0111111" when b"0000",
		"0000110" when b"0001",
		"1011011" when b"0010",
		"1001111" when b"0011",
		"1100110" when b"0100",
		"1101101" when b"0101",
		"1111101" when b"0110",
		"0000111" when b"0111",
		"1111111" when b"1000",
		"1101111" when b"1001",
		"1110111" when b"1010",
		"1111100" when b"1011",
		"0111001" when b"1100",
		"1011110" when b"1101",
		"1111001" when b"1110",
		"1110001" when others;

end Behavioral;

