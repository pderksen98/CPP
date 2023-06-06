#ifndef _FORM_HPP_
#define _FORM_HPP_

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        ~Form();
        const Form& operator=(const Form &copy);

        std::string   getName() const;
        bool          getSigned() const;
        int           getGradeToSign() const;
        int           getGradeToExecute() const; 
        void          beSigned(const class Bureaucrat &bureaucrat);
       
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
} ;

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif