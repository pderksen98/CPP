/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 13:42:46 by pderksen      #+#    #+#                 */
/*   Updated: 2022/11/30 15:43:02 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "memory address of string:    " << YELLOW << stringPTR << PLAIN << std::endl;
	std::cout << "memory address of stringPTR: " << YELLOW << &stringPTR << PLAIN << std::endl;
	std::cout << "memory address of stringREF: " << YELLOW << &stringREF << PLAIN << std::endl << std::endl;

	std::cout << "string value: 		       " << YELLOW << string << PLAIN << std::endl;
	std::cout << "value pointed to by stringPTR: " << YELLOW << *stringPTR << PLAIN << std::endl;
	std::cout << "value pointer to by stringREF: " << YELLOW << stringREF << PLAIN << std::endl;
	return (0);
}
