#include "Intern.hpp"

Intern::Intern() {
    std::cout << YELLOW << "Intern default constructor called" << PLAIN << std::endl;
}

Intern::Intern(Intern const& src) {
    std::cout << YELLOW << "Intern copy constructor called" << PLAIN << std::endl;
    *this = src;
}

Intern::~Intern() {
    std::cout << LESS_RED << "Intern destructor called" << PLAIN << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
    std::cout << YELLOW << "Intern copy assignation operator called" << PLAIN << std::endl;
    (void)other;
    return *this;
}

AForm *shrubberyCreation(const std::string& target) {
    ShrubberyCreationForm	*ptr = new ShrubberyCreationForm(target);
    return (ptr);
}

AForm *robotomyRequest(const std::string& target) {
    RobotomyRequestForm	*ptr = new RobotomyRequestForm(target);
    return (ptr);
}

AForm *presidentialPardon(const std::string& target) {
    PresidentialPardonForm	*ptr = new PresidentialPardonForm(target);
    return (ptr);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*formFunctions[3])(const std::string& target) = {shrubberyCreation, robotomyRequest, presidentialPardon};
    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << GREEN << "Intern creates " << formName << " form" << PLAIN << std::endl;
            return formFunctions[i](target);
        }
    }
    std::cout << "Intern dit not found the form" << std::endl;
    return nullptr;
    // throw FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw() {
    return ("Intern dit not found the form");
}
