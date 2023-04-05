#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{	
	private:
	Brain*	_brain;

	public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	const Cat &operator=(const Cat &other);

	void 	makeSound() const;
	void 	addIdea(const std::string& idea);
	void 	printIdeas();
	Brain	*getBrain() const;
};

#endif
