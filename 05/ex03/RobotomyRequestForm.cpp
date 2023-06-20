#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : AForm("RobotomyRequestForm", 72, 45) {
    std::cout << YELLOW << "RobotomyRequestForm default constructor called" << PLAIN << std::endl;
    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45) {
    std::cout << YELLOW << "RobotomyRequestForm constructor called" << PLAIN << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other) {
    std::cout << YELLOW << "RobotomyRequestForm copy constructor called" << PLAIN << std::endl;
    this->_target = other._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    std::cout << YELLOW << "RobotomyRequestForm assignation operator called" << PLAIN << std::endl;
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << LESS_RED << "RobotomyRequestForm destructor called" << PLAIN << std::endl;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (!this->getSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowToExecuteException();
    //50% chance of success
    if (rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else 
        std::cout << this->_target << " robotomization failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const {
    return (this->_target);
}
