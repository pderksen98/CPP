#ifndef BITCOIN_HPP
#define BITCOIN_HPP

# define RED "\033[1;31m"
# define PLAIN "\033[0m" 
# define GREEN "\033[1;92m"

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
// #include <iomanip> //for std:;setprecision and std::fixed
// #include <string> //WHY DOES IT WORK WITHOUT THIS?


std::map<std::string,float> parseBitcoinData(void);
void                        parseInput(char* inputFile, const std::map<std::string,float>& bitcoinData);
bool                        isLeapYear(int year);
int                         getDaysInMonth(int month, int year);
bool                        isDateValid(const std::string& date);
bool                        isValueValid(float value);


#endif
