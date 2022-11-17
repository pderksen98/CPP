/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 15:33:11 by pderksen      #+#    #+#                 */
/*   Updated: 2022/11/17 17:57:53 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	// std::cout << "contact constructor" << std::endl;
}

bool Contact::IsEmpty()
{
	return (empty);
}

void	Contact::Blank()
{
	
	// std::cout << "'Blank' function" << std::endl;
	first_name = "**EMPTY**";
	last_name = "**EMPTY**";
	nick_name = "**EMPTY**";
	phone_number = "**EMPTY**";
	darkest_secret = "**EMPTY**";
	empty = true;
}

void	Contact::New()
{
	std::cout << "First name: " << std::endl;
	do {
		std::getline(std::cin, first_name);
	} while (first_name == "");
	std::cout << "Last name: " << std::endl;
	do {
		std::getline(std::cin, last_name);
	} while (last_name == "");
	std::cout << "Nick name: " << std::endl;
	do {
		std::getline(std::cin, nick_name);
	} while (nick_name == "");
	std::cout << "Phone number: " << std::endl;
	do {
		std::getline(std::cin, phone_number);
	} while (phone_number == "");
	std::cout << "Darkest secret: " << std::endl;
	do {
		std::getline(std::cin, darkest_secret);
	} while (darkest_secret == "");
	empty = false;
}

// void    Contact::Print()
// {
// 	std::cout << std::endl;
// 	if (IsEmpty())
// 	{
// 		std::cout << "This contact does not exist yet..." << std::endl;
// 		return ;
// 	}
//     std::cout << "First name: " << first_name << std::endl;
//     std::cout << "Last name: " << last_name << std::endl;
//     std::cout << "Nick name: " << nick_name << std::endl;
//     std::cout << "Phone number: " << phone_number << std::endl;
//     std::cout << "Darkest secret: " << darkest_secret << std::endl;
// }
