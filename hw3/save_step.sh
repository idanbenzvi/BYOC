#! /bin/bash
FILENAME="hw3_`date | sed 's/[[:space:]]/_/g' | sed 's/:/_/g'`.zip"
zip -r output/${FILENAME} GPR_File
echo "Saved to ${FILENAME}"


