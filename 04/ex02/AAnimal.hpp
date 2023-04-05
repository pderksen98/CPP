#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <string>
#include <iostream>
#define YELLOW "\033[0;33m"
#define PLAIN "\033[0m"
#define RED "\033[1;31m"
#define LESS_RED "\033[0;31m"
#define GREEN "\033[1;92m"
#define CYAN "\033[1;36m"

class AAnimal
{
	protected:
	std::string _type;

	public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &other);
	virtual ~AAnimal();
	const AAnimal &operator=(const AAnimal &other);

	// void 		setType(std::string Type);
	virtual void	makeSound(void) const = 0;
	std::string 	getType(void) const;
};

#endif