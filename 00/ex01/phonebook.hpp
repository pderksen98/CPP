#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#include "contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
public:
	int		run(std::string input);
	void    add_contact();
	void    search();
	void    print_contact_list();
	PhoneBook();
};


#endif
