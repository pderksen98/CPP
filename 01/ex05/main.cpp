#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	std::cout << YELLOW << "	debug:\n" << PLAIN;
	harl.complain("DEBUG");
	std::cout << YELLOW << "	info: \n" << PLAIN;
	harl.complain("INFO");
	std::cout << YELLOW << "	warning:\n" << PLAIN;
	harl.complain("WARNING");
	std::cout << YELLOW << "	error:\n" << PLAIN;
	harl.complain("ERROR");
	std::cout << YELLOW << "	hello:\n" << PLAIN;
	harl.complain("HELLO");
	return (0);
}
