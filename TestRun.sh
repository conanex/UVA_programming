#!/bin/bash

COMMAND=$1
PROBLEM=$2
EXE=Execute
TEST=case.test

if [ "${COMMAND}" == 'C' ]; then
	make all -B N=${PROBLEM}
elif [ "${COMMAND}" == "R" ]; then
	${EXE}/UVA${PROBLEM}.out < ${EXE}/${TEST}
else
	echo "Input ERROR"
fi
