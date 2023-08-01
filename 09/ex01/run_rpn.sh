#!/bin/bash

expression1="8 9 * 9 - 9 - 9 - 4 - 1 +"
expression2="7 7 * 7 -"
expression3="1 2 * 2 / 2 * 2 4 - +"
expression4="(1 + 1)"

expression5=""
expression6="     "
expression7=" 4 3 2 0 /"
tab=$'\t'

echo "./RPN \"$expression1\""
./RPN "$expression1"
echo "./RPN \"$expression2\""
./RPN "$expression2"
echo "./RPN \"$expression3\""
./RPN "$expression3"
echo "./RPN \"$expression4\""
./RPN "$expression4"
echo -e "\n ------ Extra checks ---------\n"
echo "./RPN \"$expression5\""
./RPN "$expression5"
echo "./RPN \"$expression6\""
./RPN "$expression6"
echo "./RPN \"$expression7\""
./RPN "$expression7"
echo -e "./RPN \"$tab\""
./RPN "$tab"