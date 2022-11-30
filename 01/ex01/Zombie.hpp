#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
//# include <string>
// # include <iomanip>
// # include <limits>
// # include <stdlib.h>
// 
# define GREEN "\033[1;92m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"

class Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		void	giveName(std::string newName);
		Zombie(void);
		~Zombie(void);
} ;

Zombie* zombieHorde(int N, std::string name);

#endif