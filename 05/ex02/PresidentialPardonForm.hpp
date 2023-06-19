#include "AForm.hpp"
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string _target;

    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string& target);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

        void execute(const Bureaucrat &executor) const;
        std::string getTarget(void) const;
} ;