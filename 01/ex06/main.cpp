#include "Harl.hpp"

void    Harl::complain(std::string level)
{
	typedef void(Harl::*FuncPtr)();

	FuncPtr f[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; i < 4 && levels[i] != level; i++);
	switch (i)
	{
		case 0:
			(this->*f[0])();
		case 1:
			(this->*f[1])();
		case 2:
			(this->*f[2])();
		case 3:
			(this->*f[3])();
			break ;
		default:
			std::cout << "[Probalbly complaining about insignificant problems]" << std::endl;
	}
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Not correct number of arguments: expected 1." << PLAIN << std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(argv[1]);
	return (0);
}