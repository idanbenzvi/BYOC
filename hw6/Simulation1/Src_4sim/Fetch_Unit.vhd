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
IR_reg_pID		:	out		STD_LOGIC_VECTOR  (31 downto 0);-- The IR_reg (instruction) to be used in ID 
sext_imm_pID	:	out		STD_LOGIC_VECTOR  (31 downto 0);-- The sext_imm to be used in ID 
PC_reg_pIF		:	out		STD_LOGIC_VECTOR  (31 downto 0);-- The PC_reg value in IF. To be read by TB in simulation and rdbk in implementation - for verification purposes 
Rs_equals_Rt_pID  : in  	STD_LOGIC;-- '1' if value read from Rs equals the value read from Rt, '0' otherwise. Used in branch instructions.
jr_adrs_in		: in	STD_LOGIC_VECTOR  (31 downto 0);
-- IMem signals
MIPS_IMem_adrs	     : out STD_LOGIC_VECTOR (31 downto 0);
MIPS_IMem_rd_data     : in STD_LOGIC_VECTOR (31 downto 0)
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
signal  IMem_adrs 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  IMem_rd_data	: STD_LOGIC_VECTOR  (31 downto 0);


-- ========================  MIPS signals  ==========================================
-- ==================================================================================

--=========================== IF phase ==============================================
--===================================================================================
--- IR & related signals
signal  IR_reg			: STD_LOGIC_VECTOR  (31 downto 0) := x"00000000";
signal  imm 			: STD_LOGIC_VECTOR  (15 downto 0);
signal  sext_imm 		: STD_LOGIC_VECTOR  (31 downto 0);
signal  opcode 		: STD_LOGIC_VECTOR  (5 downto 0);
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
signal PC_plus_4_pID 	: STD_LOGIC_VECTOR  (31 downto 0);

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

jr_adrs <= jr_adrs_in;
-- removed rdbk outputs signals

-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- your Fetch_Unit code starts here @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

-- ============================= IF phase processes ======================================
-- ========================================= =============================================
--PC register

process(CK,RESET)
begin
if RESET = '1' then
	PC_reg <= jr_adrs;
elsif CK'event and CK='1' and HOLD ='0' then -- ASK GENERIC DANNY
	PC_reg <= PC_mux_out ;
end if;
end process;

IMem_adrs <= PC_reg; -- connect PC_reg to IMem
PC_reg_pIF <= PC_reg; -- connect to pIF signal for the TB as spcified inthe Top_4sim

--PC source mux
process(PC_Source,PC_plus_4, branch_adrs, jr_adrs, jump_adrs)
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
IR_reg_pID <= IR_reg; -- added for the ID phase (output)

-- imm sign extension	  (create the sext_imm signal)
imm <=  IR_reg(15 downto 0);


process(imm)
begin
	if imm(15) = '1' then
		  sext_imm(31 downto 16) <= x"ffff";
	else
		  sext_imm(31 downto 16) <= x"0000";
	end if;
	sext_imm(15 downto 0) <= imm;
end process;

sext_imm_pID <= sext_imm; -- output signal to the ID phase

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
process(opcode, PC_source, Rs_equals_Rt_pID, funct) --sensitive to changes in the opcode
begin
	case opcode is
		when b"000010" => PC_source <= b"11"; --j
		when b"000011" => PC_source <= b"11"; --jal
		when b"000100" => 
			if(Rs_equals_Rt_pID = '1') then
				PC_source <= b"01"; --beq
			else
				-- do nothing
				PC_source <= b"00";
			end if;
		when b"000101" =>
			if(Rs_equals_Rt_pID = '0') then
				PC_source <= b"01"; --bne
			
			else
				-- do nothing
			PC_source <= b"00";
			end if;
		when b"000000" =>
			if funct = b"001000" then
				PC_source <= b"10"; -- jr
			else
				PC_source <= b"00"; -- all other cases
			end if;
		when others => PC_source <= b"00" ; -- all other commands
	end case;
end process;

-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- your Fetch_Unit code ends here   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
-- @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

-- rdbk signals
--
rdbk_vec1  <=  x"0000000" & b"00" & PC_source;

end Behavioral;

-- ******************************************************************************************
-- ******************************************************************************************
