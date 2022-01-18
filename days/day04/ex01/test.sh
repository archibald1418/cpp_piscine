#!/bin/sh
echo "count cats";
./animal | grep -cE "^🐱+"
echo "count dogs";
./animal | grep -cE "^👅+"
echo "count brains";
./animal | grep -c "Animal brain killed"
