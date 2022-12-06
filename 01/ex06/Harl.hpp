#ifndef _HARL_CPP
# define _HARL_CPP
#include <iostream>
#include <string>
# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"
# define RED "\033[1;31m"
# define LESS_RED "\033[0;31m"
# define GREEN "\033[1;92m"
# define CYAN "\033[0;36m"

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
} ;

#endif
