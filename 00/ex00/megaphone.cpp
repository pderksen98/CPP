/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 13:20:58 by pderksen      #+#    #+#                 */
/*   Updated: 2022/11/14 11:27:43 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	UpperCaseString(char *Str)
{
	for (int i = 0; Str[i]; i++)
		if (Str[i] >= 'a' || Str[i] <= 'z')
			Str[i] = std::toupper(Str[i]);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			UpperCaseString(argv[i]);
			std::cout << argv[i];
		}
	std::cout << std::endl;
	return (0);
}
