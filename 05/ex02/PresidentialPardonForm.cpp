#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    : AForm("PresidentialPardonForm", 25 , 5){
    std::cout << YELLOW << "PresidentialPardonForm default constructor called" << PLAIN << std::endl;
    this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25 , 5) {
    std::cout << YELLOW << "PresidentialPardonForm constructor called" << PLAIN << std::endl;
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other) {
    std::cout << YELLOW << "PresidentialPardonForm copy constructor called" << PLAIN << std::endl;
    this->_target = other._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    std::cout << YELLOW << "PresidentialPardonForm assignation operator called" << PLAIN << std::endl;
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << LESS_RED << "PresidentialPardonForm destructor called" << PLAIN << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (!this->getSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowToExecuteException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const {
    return (this->_target);
}
