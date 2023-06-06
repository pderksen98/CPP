#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
// #include <stdexcept>
#include "Colors.hpp"

class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat(void);
        Bureaucrat& operator=(const Bureaucrat& other);
        Bureaucrat(std::string name, int grade);

        std::string getName(void) const;
        int         getGrade(void) const;
        void        incrementGrade(void);
        void        decrementGrade(void);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() ;
        } ;
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() ;
        } ;
        
} ;

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);

#endif