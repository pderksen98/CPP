#include "Base.hpp"
#include <iostream>

# define ROUNDS 10
# define RED "\033[1;91m\033[3m"
# define GREEN "\033[1;92m"
# define RESET "\033[0m"

Base* 	generate(void) {
	int		rand = std::rand() % 3;
	Base*	base;

	if (rand == 0) 
		base = new A;
	else if (rand == 1)
		base = new B;
	else
		base = new C;
	// std::cout << "Random number = " << rand << std::endl;
	return (base); 
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << GREEN << "A" << RESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << GREEN << "B" << RESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << GREEN << "C" << RESET << std::endl;
	else
		std::cout << RED << "Something weird happened" << RESET << std::endl;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << GREEN << "A" << RESET << std::endl;
	} catch (std::bad_cast& bc) {
		try {
			// std::cout << RED << "A failed" << RESET << std::endl;
			(void)dynamic_cast<B&>(p);
			std::cout << GREEN << "B" << RESET << std::endl;
		} catch (std::bad_cast& bc) {
			try {
				// std::cout << RED << "B failed" << RESET << std::endl;
				(void)dynamic_cast<C&>(p);
				std::cout << GREEN << "C" << RESET << std::endl;
			} catch (std::bad_cast& bc) {
				std::cout << RED << "Something weird happened" << RESET << std::endl;
			}
		}
	}
}

int	main() {
	srand(time(NULL));

	std::cout << " *** Identify with pointers *** \n";
	for (int i = 0; i < ROUNDS; i++) {
		Base*	p = generate();
		identify(p);
		delete p;
	}
	std::cout << "\n *** Identify with references ***\n";
	for (int i = 0; i < ROUNDS; i++) {
		Base*	p = generate();
		Base&	r = *p;
		identify(r);
		delete p;
	}
	return (0);
}
