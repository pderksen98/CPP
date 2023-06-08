#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "Form.hpp"

Form::Form() : _name("defaultForm"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {
    std::cout << YELLOW << "Form default constructor called" << PLAIN << std::endl;
}

Form::~Form() {
    std::cout << LESS_RED << "Form destructor called" << PLAIN << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
    std::cout << YELLOW << "Form copy constructor called" << PLAIN << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    std::cout << YELLOW << "Form constructor called" << PLAIN << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
}

const Form& Form::operator=(const Form &copy) {
    std::cout << YELLOW << "Form assignation operator called" << PLAIN << std::endl;
    if (this != &copy) {
        this->_signed = copy._signed;
    }
    return (*this);
}

std::string Form::getName() const {
    return (this->_name);
}

bool        Form::getSigned() const {
    return (this->_signed);
}

int         Form::getGradeToSign() const {
    return (this->_gradeToSign);
}

int         Form::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void        Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign) {
        throw Form::GradeTooLowException();
    }
    this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Form exception: Grade to High");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Form exception: Grade to Low");
}

std::ostream& operator<<(std::ostream &stream, const Form& obj) {
    stream << "Form " << CYAN << obj.getName() << PLAIN << " is ";
    stream << (obj.getSigned() ? "signed" : "not signed");
    stream << " and requires grade " << GREEN << obj.getGradeToSign() << PLAIN << " to be signed and grade ";
    stream << GREEN << obj.getGradeToExecute() << PLAIN << " to be executed" << std::endl;
    return (stream);
}
