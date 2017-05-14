--
-- 
-- This package includes definition of all filenames used in simulations

--
--
--------------------------------------------------------------------------------
library	 ieee;

package  BYOC_filenames  is
	
use ieee.std_logic_arith.all;  
use ieee.std_logic_unsigned.all;
use ieee.std_logic_1164.all;
use std.textio.all;
use IEEE.NUMERIC_STD.all;

constant	ALU_data_in_file_name 		: string := "..\..\HW3_MIPS_ALU_src_for_sim\SIM_MIPS_ALU_TB_data.dat";

signal 		no_hold					: STD_LOGIC := '0';-- MUST be '0' for correct TB messages!!!

end BYOC_filenames;