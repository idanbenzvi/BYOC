#! /bin/bash
FILENAME="hw3_`date | sed 's/[[:space:]]/_/g' | sed 's/:/_/g'`.zip"
zip -r output/${FILENAME} Src_4Sim Src_4ISE Sim ISE
echo "Saved to ${FILENAME}"


