#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
	bool		empty;
public:
	Contact();
	void	PrintRow();
	bool	IsEmpty();
	void	New();
	void	Blank();
	void	Print();
};


#endif
