#ifndef _SED_HPP
# define _SED_HPP

#include <iostream>
#include <fstream>
#include <string>

# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"
# define GREEN "\033[1;92m"
# define RED "\033[1;31m"
# define CYAN "\033[0;36m"

class CpFile
{
    private:
        std::ifstream   _input;
        std::ofstream   _output;
        std::string     _s1;
        std::string     _s2;
    public:
        int         parse(std::string file_name, std::string s1, std::string s2);
        std::string determineLine(std::string line);
        void        readFile();
} ;

#endif