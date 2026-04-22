#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{                                                    
    Intern noob;
                                                                            // Grade requirements:
    AForm* presidential = noob.makeForm("PresidentialPardonForm", "Nixon"); // 25 to sign, 5 to exec
    AForm* shrubbery    = noob.makeForm("ShrubberyCreationForm", "trees");  // 145 to sign, 137 to exec
    AForm* robotomy     = noob.makeForm("RobotomyRequestForm", "mount everest"); // 72 to sign, 45 to exec
    AForm* gibberish    = noob.makeForm("Holiday request", "overworked chef");

    Bureaucrat gideon("gideon", 144); // change gideons grade to test different results.

    gideon.signForm(*presidential);
    gideon.executeForm(*presidential);
    gideon.signForm(*shrubbery);
    gideon.executeForm(*shrubbery);
    gideon.signForm(*robotomy);
    gideon.executeForm(*robotomy);
    if (gibberish)
    {
        gideon.signForm(*gibberish);
        gideon.executeForm(*gibberish);
    }

    delete presidential;
    delete shrubbery;
    delete robotomy;
}