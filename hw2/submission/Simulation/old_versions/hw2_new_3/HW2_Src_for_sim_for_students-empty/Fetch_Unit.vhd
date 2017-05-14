--
--
-- This module is the Fetch Unit
--
--
--
--
--
----------------------------------------------------------------------------------
library IEEE ;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- ************************************************************************************************
-- ************************************************************************************************

entity Fetch_Unit is
Port	(
--
CK_25MHz 		: in STD_LOGIC;
RESET_in 		: in STD_LOGIC;
HOLD_in 		: in STD_LOGIC;
-- IMem signals
MIPS_IMem_adrs	     : out STD_LOGIC_VECTOR (31 downto 0);
MIPS_IMem_rd_data     : in STD_LOGIC_VECTOR (31 downto 0);
--rdbk signals
rdbk0			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk1			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk2			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk3			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk4			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk5			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk6			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk7			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk8			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk9			 :out STD_LOGIC_VECTOR (31 downto 0);
rdbk10			  :out STD_LOGIC_VECTOR (31 downto 0);
rdbk11			  :out STD_LOGIC_VECTOR (31 downto 0);
rdbk12			  :out STD_LOGIC_VECTOR (31 downto 0);
rdbk13			  :out STD_LOGIC_VECTOR (31 downto 0);
rdbk14			  :out STD_LOGIC_VECTOR (31 downto 0);
rdbk15			  :out STD_LOGIC_VECTOR (31 downto 0)
		);
end Fetch_Unit;


architecture Behavioral of Fetch_Unit is

-- ***********************************************************************************************
-- ***********************************************************************************************


--- ========================  Host intf signals  =====================================
--====================================================================================
signal  RESET 			:STD_LOGIC;-- is coming directly from the Fetch_Unit_Host_intf
signal  CK 				:STD_LOGIC;-- is coming directly from the Fetch_Unit_Host_intf
signal  HOLD 			:STD_LOGIC;-- is coming directly from the Fetch_Unit_Host_intf
signal	IMem_adrs 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  IMem_rd_data	: STD_LOGIC_VECTOR  (31 downto 0);


-- ========================  MIPS signals  ==========================================
-- ==================================================================================

--=========================== IF phase ==============================================
--===================================================================================
--- IR & related signals
signal  IR_reg			: STD_LOGIC_VECTOR  (31 downto 0) := x"00000000";
signal  imm 			: STD_LOGIC_VECTOR  (15 downto 0);
signal  sext_imm 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  opcode 			: STD_LOGIC_VECTOR  (5 downto 0);
signal  funct 			: STD_LOGIC_VECTOR  (5 downto 0);

-- PC
signal  PC_reg			: STD_LOGIC_VECTOR  (31 downto 0) := x"00000000";

-- PC_mux
-- control
signal  PC_Source 		: STD_LOGIC_VECTOR  (1 downto 0);-- 0=PC+4, 1=BRANCH, 2=JR, 3=JUMP
-- inputs to PC_mux
signal  PC_plus_4 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  jump_adrs 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  branch_adrs 	: STD_LOGIC_VECTOR  (31 downto 0);
signal  jr_adrs 		: STD_LOGIC_VECTOR  (31 downto 0);
-- output
signal  PC_mux_out		: STD_LOGIC_VECTOR  (31 downto 0);


signal  PC_plus_4_pID 	: STD_LOGIC_VECTOR  (31 downto 0);
-- ================== End of MIPS signals ==========================================
-- =================================================================================


-- additional rdbk signals
signal  rdbk_vec1 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  rdbk_vec2 		: STD_LOGIC_VECTOR  (31 downto 0);


-- ***************************************************************************************************


begin

-- Connecting the Fetch_Unit pins to inner signals
-- =============================================================
-- MIPS signals    [to be used by students]
CK			<=		CK_25MHz;
RESET		<=		RESET_in;
HOLD		<=   	HOLD_in;
MIPS_IMem_adrs 	<=  IMem_adrs;
IMem_rd_data <=		MIPS_IMem_rd_data;
-- RDBK signals    [to be used by students]
rdbk0 		<= 		PC_reg;
rdbk1 		<= 		PC_plus_4;
rdbk2 		<= 		branch_adrs;
rdbk3 		<= 		jr_adrs;
rdbk4 		<= 		jump_adrs;
rdbk5 		<= 		PC_plus_4_pID;
rdbk6 		<= 		IR_reg;
rdbk7 		<= 		rdbk_vec1;-- PC_source
rdbk8 		<= 		PC_mux_out;
rdbk9 		<= 		x"00000000";
rdbk10 		<= 		x"00000000";
rdbk11 		<= 		x"00000000";
rdbk12 		<= 		x"00000000";
rdbk13 		<= 		x"00000000";
rdbk14 		<= 		x"00000000";
rdbk15 		<= 		x"00000000";
--

-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- your Fetch_Unit code starts here @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

-- ============================= IF phase processes ======================================
-- ========================================= =============================================
--PC register

process(CK,RESET)
begin
if RESET = '1' then
	PC_reg <= x"00400000";
elsif CK'event and CK='1' and HOLD ='0' then -- ASK GENERIC DANNY
	PC_reg <= PC_mux_out ;
end if;
end process;

IMem_adrs <= PC_reg; -- connect PC_reg to IMem

--PC source mux

process(PC_Source)
begin
	case PC_Source is
		when b"00" => PC_mux_out <= PC_Plus_4;
		when b"01" => PC_mux_out <= branch_adrs;
		when b"10" => PC_mux_out <= jr_adrs;
		when others => PC_mux_out <= jump_adrs;
	end case;
end process;

-- PC Adder - incrementing PC by 4  (create the PC_plus_4 signal)
PC_plus_4 <= PC_reg + 4;

-- IR_reg   (rename of the IMem_rd_data signal)
IR_reg <= IMem_rd_data;

-- imm sign extension	  (create the sext_imm signal)
imm <=  IR_reg(15 downto 0);

process(imm)
begin
	if imm(15) = '1' then
			sext_imm <= x"ffff" & imm;
	else
		  sext_imm <= x"0000" & imm;
	end if;
end process;

-- BRANCH address  (create the branch_adrs signal)
branch_adrs <= (sext_imm(29 downto 0) & b"00") + PC_plus_4_pID;

-- JUMP address    (create the jump_adrs signal)
jump_adrs <= PC_plus_4_pID(31 downto 28) & ((IR_reg(25 downto 0) & b"00"));

-- JR address    (create the jr_adrs signal)
jr_adrs <= x"00400004";

-- PC_plus_4_pID register   (create the PC_plus_4_pID signal)
process(CK,RESET)
begin
	if RESET = '1' then
		PC_plus_4_pID <= x"00000000";
	elsif CK'event and CK = '1' and HOLD= '0' then
			PC_plus_4_pID <= PC_plus_4;
	end if;
end process;

-- instruction decoder
opcode <= IR_reg(31 downto 26);
funct  <= IR_reg(5 downto 0);

-- PC_source decoder  (create the PC_source signal)
process(opcode) --sensitive to changes in the opcode
begin
	case opcode is
		when b"000010" => PC_source <= b"11"; --j
		when b"000011" => PC_source <= b"11"; --jal
		when b"000100" => PC_source <= b"01"; --beq
		when b"000101" => PC_source <= b"01"; --bne
		when b"001000" => PC_source <= b"10"; --jr
		when others => PC_source <= b"00" ; -- all other commands
	end case;
end process;


-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- your Fetch_Unit code ends here   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

-- rdbk signals
rdbk_vec1  <=  x"0000000" & b"00" & PC_source;

end Behavioral;

-- ******************************************************************************************
-- ******************************************************************************************
