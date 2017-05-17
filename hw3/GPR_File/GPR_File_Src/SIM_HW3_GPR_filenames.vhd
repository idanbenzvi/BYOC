--
-- 
-- This package includes definition of all filenames used in simulations
--
--------------------------------------------------------------------------------
library	ieee ;

package BYOC_filenames is
	
use std.textio.all ;
use ieee.std_logic_arith.all ;  
use ieee.std_logic_unsigned.all ;
use ieee.std_logic_1164.all ;
use IEEE.NUMERIC_STD.all ;

--constant	GPR_data_in_file_name	 	: string := "../Src_4sim/SIM_GPR_TB_data.dat";
constant	GPR_data_in_file_name	 	: string := "/home/parallels/Documents/byoc/BYOC_Lab_Project_1/hw3/GPR_File/GPR_File_Src/SIM_GPR_TB_data.dat";
signal 		no_hold					: STD_LOGIC :='0'; -- MUST be '0' for correct TB messages!!!

end BYOC_filenames ;
