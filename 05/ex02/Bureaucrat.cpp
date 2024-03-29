#include "Bureaucrat.hpp"
#include "Colors.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {
    std::cout << YELLOW << "Bureaucrat default constructor called" << PLAIN << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << LESS_RED << "Bureaucrat destructor called" << PLAIN << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    std::cout << YELLOW << "Bureaucrat copy constructor called" << PLAIN << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    std::cout << YELLOW << "Bureaucrat constructor called" << PLAIN << std::endl;
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } 
    this->_grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << YELLOW << "Bureaucrat assignation operator called" << PLAIN << std::endl;
    if (this != &other) {
        this->_grade = other._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName(void) const {
    return (this->_name);
}

int         Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

void        Bureaucrat::incrementGrade(void) {
    if (this->_grade == 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade--;
}

void        Bureaucrat::decrementGrade(void) {
    if (this->_grade == 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Bureaucrat exception: Grade to High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Bureaucrat exception: Grade to Low");
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj) {
    stream << "Buraucrat: " << CYAN << obj.getName()<< PLAIN << ", grade: ";
    stream << GREEN << obj.getGrade() << PLAIN << std::endl;
    return (stream);
}

void    Bureaucrat::signForm(AForm& form) const {
    // try {
        form.beSigned(*this);
        std::cout << CYAN << this->getName() << PLAIN << " signed " << CYAN << form.getName() << PLAIN << std::endl;
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION (in signForm) ---" << PLAIN << std::endl;
    //     std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
    //     std::cout << e.what() << std::endl;
    // }
}

void    Bureaucrat::executeForm(const AForm& form) const {
    // try {
        form.execute(*this);
        std::cout << CYAN << this->getName() << PLAIN << " executed " << CYAN << form.getName() << PLAIN << std::endl;
    // } catch (std::exception& e) {
    //     std::cout << std::endl << RED << " --- CATCHED EXCEPTION (in executeForm) ---" << PLAIN << std::endl;
    //     std::cout << this->getName() << " cannot execute " << form.getName() << " because ";
    //     std::cout << e.what() << std::endl;
    // }
}
