/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pieterderksen <pieterderksen@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/28 17:39:29 by pieterderks   #+#    #+#                 */
/*   Updated: 2022/11/28 18:43:56 by pieterderks   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif 