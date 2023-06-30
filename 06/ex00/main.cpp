#include <iostream>
#include <string>
#include "Colors.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 2) {
        std::cout << "Wrong number of arguments: expected 1, got " << argc - 1 << std::endl;
        return (1);
    }
    std::string input(argv[1]);
    std::string type;


    if (input.length() == 1 && !std::isdigit(input.front())) {
        type = "char";
    }
    else if (input.find('.') != std::string::npos) {
        if (input.back() == 'f')
            type = "float";
        else
            type = "double";
    }
    else {
        type = "int";
    }
    std::cout << GREEN << "TYPE: " << type << PLAIN << std::endl;
    if (type == "char") {
        char c = input[0];
        if (!std::isprint(c))
            std::cout << "char: Non displayable" << std::endl;
        else {
            std::cout << "char: " << c << std::endl;
            std::cout << "int: " << static_cast<int>(c) << std::endl;
            std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        }
    } else if (type == "int") {
        int i = std::stoi(input);
        std::cout << "char: " << static_cast<char>(i) << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    } else if (type == "float") {
        float f = std::stof(input);
        std::cout << "char: " << static_cast<char>(f) << std::endl;
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    } else if (type == "double") {
        std::cout << "input = " << input << std::endl;
        double d = std::stod(input);
        std::cout << "double d = " << d << std::endl;
        std::cout << "char: " << static_cast<char>(d) << std::endl;
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }



    return (0);
}