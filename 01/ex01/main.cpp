/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pderksen <pderksen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 11:12:20 by pderksen      #+#    #+#                 */
/*   Updated: 2022/11/30 11:54:00 by pderksen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string zombie_names;
    int N;

    std::cout << "How you like to call the zombies: ";
    getline(std::cin, zombie_names);
    std::cin.clear();
    std::cout << "How many zombies do you want to make: ";
    std::cin >> N;
    while (!std::cin.good())
    {
        std::cout << "Enter a valid number" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> N;
    }
    Zombie  *horde = zombieHorde(N, zombie_names);
    for (int i = 0; i < N; i++)
    {
        std::cout << i + 1 << ": ";
        horde[i].announce();
    }
    delete[](horde);
    return (0);
}