#!/bin/sh
if [ ! -f "./animal" ]; then
	echo "test.sh: no binary present; compile with MAKE";
	exit 1;
fi;

echo "count cats";
./animal | grep -cE "^🐱+"
echo "count dogs";
./animal | grep -cE "^👅+"
echo "count brains";
./animal | grep -c "brain killed"
