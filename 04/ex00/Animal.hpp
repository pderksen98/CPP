#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
# define YELLOW "\033[0;33m"
# define PLAIN "\033[0m"
# define RED "\033[1;31m"
# define LESS_RED "\033[0;31m"
# define GREEN "\033[1;92m"
# define CYAN "\033[1;36m"

class Animal
{
	private:
	std::string	type;
	
	public:
	Animal();
	Animal(const Animal& other);
	~Animal();
	const Animal&	operator=(const Animal& other);
	
	void		set_type(std::string Type);
	std::string	get_type(void) const;
	std::string	make_sound(void) const;
};

#endif