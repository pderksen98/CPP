#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"
#include "Colors.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    public:
        Intern();
        Intern(Intern const& src);
        ~Intern();
        Intern& operator=(Intern const& rhs);

        AForm* makeForm(const std::string& formName, const std::string& target) const;

        class FormNotFoundException: public std::exception {
            public:
                virtual const char* what() const throw();
        };
};


#endif