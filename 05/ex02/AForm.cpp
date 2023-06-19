#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "AForm.hpp"

AForm::AForm() : _name("defaultAForm"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
    std::cout << YELLOW << "AForm default constructor called" << PLAIN << std::endl;
}

AForm::~AForm() {
    std::cout << LESS_RED << "AForm destructor called" << PLAIN << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
    std::cout << YELLOW << "AForm copy constructor called" << PLAIN << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    std::cout << YELLOW << "AForm constructor called" << PLAIN << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw AForm::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw AForm::GradeTooLowException();
    }
}

const AForm& AForm::operator=(const AForm &copy) {
    std::cout << YELLOW << "AForm assignation operator called" << PLAIN << std::endl;
    if (this != &copy) {
        this->_signed = copy._signed;
    }
    return (*this);
}

std::string AForm::getName() const {
    return (this->_name);
}

bool        AForm::getSigned() const {
    return (this->_signed);
}

int         AForm::getGradeToSign() const {
    return (this->_gradeToSign);
}

int         AForm::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void        AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (this->_signed) {
        throw AForm::FormAlreadySignedException();
    }
    if (bureaucrat.getGrade() > this->_gradeToSign) {
        throw AForm::GradeTooLowToSignException();
    }
    this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("AForm exception: Grade to High");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("AForm exception: Grade to Low");
}

const char* AForm::NotSignedException::what() const throw() {
    return ("Form is not signed");
}

const char* AForm::GradeTooLowToSignException::what() const throw() {
    return ("Grade is too low to sign");
}

const char* AForm::GradeTooLowToExecuteException::what() const throw() {
    return ("Grade is too low to execute");
}

const char* AForm::FormAlreadySignedException::what() const throw() {
    return ("Form is already signed");
}

std::ostream& operator<<(std::ostream &stream, const AForm& obj) {
    stream << "AForm " << CYAN << obj.getName() << PLAIN << " is ";
    stream << (obj.getSigned() ? "signed" : "not signed");
    stream << " and requires grade " << GREEN << obj.getGradeToSign() << PLAIN << " to be signed and grade ";
    stream << GREEN << obj.getGradeToExecute() << PLAIN << " to be executed" << std::endl;
    return (stream);
}
