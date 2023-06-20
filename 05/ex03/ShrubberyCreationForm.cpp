#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
    : AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << YELLOW << "ShrubberyCreationForm default constructor called" << PLAIN << std::endl;
    this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137) {
    std::cout << YELLOW << "ShrubberyCreationForm constructor called" << PLAIN << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << LESS_RED << "ShrubberyCreationForm destructor called" << PLAIN << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other) {
    std::cout << YELLOW << "ShrubberyCreationForm copy constructor called" << PLAIN << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    std::cout << YELLOW << "ShrubberyCreationForm assignation operator called" << PLAIN << std::endl;
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!this->getSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowToExecuteException();

    std::ofstream file(this->_target + "_shrubbery");
    if (!file.is_open())
        throw std::runtime_error("Cannot open file");
    file << "ASCII trees for shrubbery creation!" << std::endl;
    file << "         ccee88oo" << std::endl;
    file << "      C8O8O8Q8PoOb o8oo" << std::endl;
    file << "   dOB69QO8PdUOpugoO9bD" << std::endl;
    file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
    file << "      6OuU  /p u gcoUodpP" << std::endl;
    file << "        \\\\//  /douUP" << std::endl;
    file << "          \\\\////" << std::endl;
    file << "            |||" << std::endl;
    file << "            |||" << std::endl;
    file << "            |||" << std::endl;
    file << "       .....//||||\\\\" << std::endl;
    file << std::endl;
    file.close();
}

std::string ShrubberyCreationForm::getTarget(void) const {
    return (this->_target);
}
