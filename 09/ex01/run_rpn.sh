#!/bin/bash

expression1="8 9 * 9 - 9 - 9 - 4 - 1 +"
expression2="7 7 * 7 -"
expression3="1 2 * 2 / 2 * 2 4 - +"
expression4="(1 + 1)"

echo "./RPN \"$expression1\""
./RPN "$expression1"
echo "./RPN \"$expression2\""
./RPN "$expression2"
echo "./RPN \"$expression3\""
./RPN "$expression3"
echo "./RPN \"$expression4\""
./RPN "$expression4"