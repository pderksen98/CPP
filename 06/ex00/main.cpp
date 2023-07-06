#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include "Colors.hpp"
#include "scalar.hpp"

scalarConverter::scalarConverter() {}
scalarConverter::scalarConverter(scalarConverter const& src) { *this = src; }
scalarConverter::~scalarConverter() {}
scalarConverter& scalarConverter::operator=(scalarConverter const& rhs) {
	if (this != &rhs) {}
	return *this;
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
			try {
				*f = std::stof(input);
			} catch (std::exception &e) {
				err = e.what();
				std::cerr << RED << "Error: " << PLAIN << err << std::endl;
				exit (EXIT_FAILURE);
			}
			if (std::isnan(*f) || std::isinf(*f))
				err = "nan/inf";
			*c = static_cast<char>(*f);
			try {
				*i = static_cast<int>(*f);
			} catch (const std::exception& e) {
				err = e.what();
			}
			*d = static_cast<double>(*f);
			break;
		case DOUBLE:
			try {
				*d = std::stod(input);
			} catch (std::exception &e) {
				err = e.what();
				std::cerr << RED << "Error: " << PLAIN << err << std::endl;
				exit (EXIT_FAILURE);
			}
			if (std::isnan(*d) || std::isinf(*d))
				err = "nan/inf";
			*c = static_cast<char>(*d);
			*i = static_cast<int>(*d);
			*f = static_cast<float>(*d);
			break;
		default:
			std::cerr << RED << "Error: " << PLAIN << "Not a scalar" << std::endl;
			exit (EXIT_FAILURE);
	}
	return (err);
}

void	scalarConverter::convert(std::string& input) 
{
	std::string err;
	char        c;
	int         i;  
	float       f;
	double      d;

	err = readScalar(input, &c, &i, &f, &d); 
	//*** Print Char ***
	std::cout << "char: ";
	if (!err.empty() || i < 0 || i > 256)
		std::cout << "impossible" << std::endl;
	else if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	//*** Print Int ***
	std::cout << "int: ";
	if (err.compare("nan/inf") == 0)
		std::cout << "impossible" << std::endl;
	else if (i == INT_MIN && input.compare("-2147483648") != 0)
		std::cout << "overflow" << std::endl;
	else
		std::cout << i << std::endl;
	//*** Print Float ***
	std::cout << "float: ";
	if (d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity())
		std::cout << d << "f" << std::endl;
	else if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::lowest())
		std::cout << "overflow" << std::endl;
	else {
		std::cout << f;
		if (std::fmod(f, 1.0) == 0.0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	} 
	//*** Print Double ***
	std::cout << "double: " << d;
	if (std::fmod(d, 1.0) == 0.0)
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int argc, char* argv[]) 
{
	if (argc != 2 || !*argv[1]) {
		std::cerr << RED << "Error: " << PLAIN << "Invalid number of arguments" << std::endl;
		std::cerr << "usage: ./convert [scalar]" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string str(argv[1]);
	scalarConverter::convert(str);
	return (0);
}
