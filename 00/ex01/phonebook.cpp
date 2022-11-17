#include "phonebook.hpp"

void	Welcome_message()
{
	std::cout << std::endl;
	std::cout << "$$$$$$$\\  $$\\                                     $$$$$$$\\                      $$\\       " << std::endl;
	std::cout << "$$  __$$\\ $$ |                                    $$  __$$\\                     $$ |      " << std::endl;
	std::cout << "$$ |  $$ |$$$$$$$\\   $$$$$$\\  $$$$$$$\\   $$$$$$\\  $$ |  $$ | $$$$$$\\   $$$$$$\\  $$ |  $$\\ " << std::endl;
	std::cout << "$$$$$$$  |$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ $$$$$$$\\ |$$  __$$\\ $$  __$$\\ $$ | $$  |" << std::endl;
	std::cout << "$$  ____/ $$ |  $$ |$$ /  $$ |$$ |  $$ |$$$$$$$$ |$$  __$$\\ $$ /  $$ |$$ /  $$ |$$$$$$  / " << std::endl;
	std::cout << "$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$   ____|$$ |  $$ |$$ |  $$ |$$ |  $$ |$$  _$$<  " << std::endl;
	std::cout << "$$ |      $$ |  $$ |\\$$$$$$  |$$ |  $$ |\\$$$$$$$\\ $$$$$$$  |\\$$$$$$  |\\$$$$$$  |$$ | \\$$\\ " << std::endl;
	std::cout << "\\__|      \\__|  \\__| \\______/ \\__|  \\__| \\_______|\\_______/  \\______/  \\______/ \\__|  \\__|" << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "Welcome to the Phonebook! To interact you can type one of the following commands: " << std::endl << std::endl;
	std::cout << "  * ADD\t\t" << "To add a new contact to the phonebook" << std::endl;
	std::cout << "  * SEARCH\t" << "To see al the contacts and get information" << std::endl;
	std::cout << "  * EXIT\t" << "To exit the phonebook" << std::endl << std::endl;
}

void	PhoneBook::add_contact()
{
	if (!contacts[7].IsEmpty())
	{
		std::string	response;

		std::cout << "Phonebook has reached is maximum capacity, if you proceed" << std::endl;
		std::cout << "the following contact will be deleted: \n" << std::endl;
		contacts[7].Print();
		std::cout << std::endl << "To proceed, press y: " << std::endl;
		std::getline(std::cin, response);
		if (response == "y")
			contacts[7].Blank();
		else
			return ;
	}
	if (!contacts[0].IsEmpty())
	{
		int	i = 7;
		while (i > 0)
		{
			contacts[i] = contacts[i - 1];
			i--;
		}
	}
	contacts[0].New();
}

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		contacts[i].Blank();
}

int	PhoneBook::run(std::string input)
{
	if (input == "ADD")
		add_contact();
	else if (input == "SEARCH")
		search();
	else if (input == "EXIT")
	{
		std::cout << "👋" << std::endl; 
		return (1);
	}
	return (0);
}

int	main()
{
	PhoneBook	pb;
	std::string	input;

	Welcome_message();
	while (std::getline(std::cin, input))
	{
		if (!std::cin)
			break ;
		if (pb.run(input))
			break ;
	}
	return (0);
}

std::string	Truncate(std::string input)
{
	if (input.length() > 10)
	{
		input.resize(9);
		input.append(".");
	}
	return (input);
}

void	Contact::PrintRow()
{
	std::cout << "|" << std::setw(10) << Truncate(first_name);
	std::cout << "|" << std::setw(10) << Truncate(last_name);
	std::cout << "|" << std::setw(10) << Truncate(nick_name);
	std::cout << "|" << std::endl;
}

void	PhoneBook::print_contact_list()
{
	std::cout << "\nContact list:\n\n";
	// std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX  ";
	std::cout << "|" << std::setw(10) << "1st NAME ";
	std::cout << "|" << std::setw(10) << "2nd NAME ";
	std::cout << "|" << std::setw(10) << "NICKNAME " << "|" << std::endl;
	int	i = 0;
	while (i < 8)
	{
		std::cout << "|" << std::setw(6) << i + 1 << "    ";
		contacts[i].PrintRow();
		i++;
	}
	std::cout << std::endl;
	// std::cout << "---------------------------------------------" << std::endl << std::endl;

}

void	Contact::Print()
{
	if (empty)
	{
		std::cout << "This contact does not exist yet...\n";
		return ;
	}
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nick_name << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl << std::endl;
}

void	PhoneBook::search()
{
	int	index;

	print_contact_list();
	std::cout << "Please type the index of the contact whoos information you want to get displayed: " << std::endl;
	std::cin >> index;
	if (index < 1 || index > 8)
	{
		do
		{
			std::cin.clear();
			std::cout << "That index does not exist. Please type a valid index:" << std::endl;
			std::cin >> index;
		}
		while (index < 1 || index > 8);
	}
	std::cout << "YATZEE\n";
}