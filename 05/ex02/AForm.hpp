#ifndef _AFORM_HPP_
#define _AFORM_HPP_

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class AForm {
    // private:
    protected:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(const AForm &copy);
        ~AForm();
        const AForm& operator=(const AForm &copy);

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

std::ostream& operator<<(std::ostream& stream, const AForm& obj);

#endif