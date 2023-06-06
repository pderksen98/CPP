#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "Form.hpp"

int main(void) {
    // try {
    //     Form formDefault;
    //     std::cout << formDefault;
    //     Bureaucrat piet("Piet", 22);
    //     std::cout << piet;

    //     formDefault.beSigned(piet);
    //     // std::cout << formDefault;
    //     piet.signForm(formDefault);
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << std::endl << std::endl;
    // try {
    //     Form f1("F1", 10, 40);
    //     Bureaucrat jaap("Jaap", 42);

    //     jaap.signForm(f1);
    //     // f1.beSigned(jaap);
    // } catch(std::exception &e) {
    //     std::cout << "Exception caught: ";
    //     std::cout << e.what() << std::endl;
    // }

        {
        std::cout << " ====== CASE1: BUREAUCRAT AUTHORISED TO SIGN =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING BUREAUCRAT (LVL 1)---" << std::endl;
            Bureaucrat  president("President", 1);

            std::cout << " --- CREATING FORM (LVL 5) ---" << std::endl;
            Form    healthCareBill("Health Care Bill", 5, 5);

            std::cout << std::endl << " --- CURRENT RANK PRESIDENT ---" << std::endl;
            std::cout << president << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM- --" << std::endl;
            std::cout << healthCareBill << std::endl;

            std::cout << " --- PRESIDENT SIGNS FORM ---" << std::endl;
            president.signForm(healthCareBill);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << std::endl << std::endl << " ====== CASE2: BUREAUCRAT UNAUTHORISED TO SIGN =====" << std::endl << std::endl;
        try
        {
            std::cout << " --- CREATING VISITOR (LVL 150)---" << std::endl;
            Bureaucrat  visitor;

            std::cout << " --- CREATING FORM (LVL 5) ---" << std::endl;
            Form    healthCareBill("Health Care Bill", 5, 5);

            std::cout << std::endl << " --- CURRENT RANK VISITOR ---" << std::endl;
            std::cout << visitor << std::endl;

            std::cout << std::endl << " --- INFORMATION FORM- --" << std::endl;
            std::cout << healthCareBill << std::endl;

            std::cout << " --- VISITOR SIGNS FORM ---" << std::endl;
            visitor.signForm(healthCareBill);

            std::cout << std::endl << " --- DECONSTRUCT ---" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << std::endl << " --- CATCHING EXCEPTION ---" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    return (0);
} 