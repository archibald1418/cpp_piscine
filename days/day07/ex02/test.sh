#!/bin/bash

if [ ! -f test ]; then
	echo "You need to compile with 'make' first"
	exit;
fi;
	
./test;
./test 2> /dev/null | grep '<' -c | tr -d '\n';
echo ' <= numbers generated'
