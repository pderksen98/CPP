#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//SHRUBBERY = 145 sign && 137 exec
//ROBOTOMY = 72 sign && 45 exec
//PRESIDENTIAL = 25 sign && 5 exec


int main()
{
    std::cout << "--------------[ Create Intern ]--------------" << std::endl;
    Intern nameless;
    AForm *form;

    std::cout << "--------------[ Create Shrubbery Form ]--------------" << std::endl;
	form = nameless.makeForm("shrubbery creation", "far far away");
    delete form;

	std::cout << "--------------[ Create Robotomy Form ]--------------" << std::endl;
	form = nameless.makeForm("robotomy request", "Chris");
    delete form;

	std::cout << "--------------[ Create Presidential Form ]--------------" << std::endl;
	form = nameless.makeForm("presidential pardon", "Mobutu");
    delete form;

	std::cout << "--------------[ Create Fake Form ]--------------" << std::endl;
	form = nameless.makeForm("forgery", "John Doe");
    delete form;

    std::cout << "--------------[ DECONSTRUCT Intern ]--------------" << std::endl;
    // system("leaks Bureaucrat");
    return (0);
}
