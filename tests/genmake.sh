#!/bin/sh

for DAY in day0{0..8}
do
    MAKETEST="$DAY/Makefile";
    SRCDIR="../days/$DAY";
    MAKESRC="$SRCDIR/Makefile";

    # MAKETEST
    echo "NAME =" > $MAKETEST;
    echo >> $MAKETEST;
    echo "all:" >> $MAKETEST;
    echo "\tclang++ tests.cpp $SRCDIR/*.cpp -I.. -I$SRCDIR -o \$(NAME)" >> $MAKETEST;
    echo >> $MAKETEST;

    # MAKESRC
    echo "NAME =" > $MAKESRC;
    echo >> $MAKESRC;
    echo "all:" >> $MAKESRC;
    echo "\tclang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o \$(NAME)" >> $MAKESRC;
    echo >> $MAKESRC;

done;
