#! /bin/bash
FILENAME="hw3_`date | sed 's/[[:space:]]/_/g' | sed 's/:/_/g'`.zip"
zip -r output/${FILENAME} GPR_File MIPS_ALU Disassembly
echo "Saved to ${FILENAME}"


