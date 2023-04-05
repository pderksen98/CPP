#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
	Brain*	_brain;

	public:
	Dog();
	Dog(const Dog &other);
	~Dog();
	const Dog &operator=(const Dog &other);

	void 	makeSound() const;
	void	addIdea(const std::string& idea);
	void	printIdeas() const;
	Brain	*getBrain() const;
};

#endif