#include <iostream>
#include <string>
#include "Colors.hpp"

#include "scalar.hpp"


int main(int argc, char* argv[]) 
{
    std::string err;
    char        c;
    int         i;
    float       f;
    double      d;

    if (argc != 2 || !*argv[1]) {
        std::cerr << RED << "Error: " << PLAIN << "Invalid number of arguments" << std::endl;
        std::cerr << "usage: ./convert [scalar]" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string str(argv[1]);

    err = readScalar(str, &c, &i, &f, &d);


    e_scalar    _type = getType(str);


    std::cout << "Type: ";
    if (_type == CHAR)
        std::cout << "char" << std::endl;
    else if (_type == INT)
        std::cout << "int" << std::endl;
    else if (_type == FLOAT)
        std::cout << "float" << std::endl;
    else if (_type == DOUBLE)
        std::cout << "double" << std::endl;
    else
        std::cout << "invalid" << std::endl;
    return (0);
}

std::string readScalar(std::string& input, char* c, int* i, float* f, double* d) 
{
    std::string err;
    e_scalar    _type = getType(input);

    switch (_type) {
        case CHAR:
            *c = input.front();
            *i = static_cast<int>(*c);
            *f = static_cast<float>(*c);
            *d = static_cast<double>(*c);
            break;
        case INT:
            try {
                *i = std::stoi(input);
            } catch (const std::out_of_range &e) {
                std::cerr << "overflow: " << input << std::endl;
                exit (EXIT_FAILURE);
            } catch (const std::exception& e) {
                err = e.what();
            }
            *c = static_cast<char>(*i);
            *f = static_cast<float>(*i);
            *d = static_cast<double>(*i);
            break;
        case FLOAT:
    }
}