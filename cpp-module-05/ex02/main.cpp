#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{                                                              // Grade requirements:
    AForm* presidential = new PresidentialPardonForm("Nixon"); // 25 to sign, 5 to exec
    AForm* shrubbery    = new ShrubberyCreationForm("trees");  // 145 to sign, 137 to exec
    AForm* robotomy     = new RobotomyRequestForm("mount everest"); // 72 to sign, 45 to exec

    Bureaucrat gideon("gideon", 1); // change gideons grade to test different results.

    gideon.signForm(*presidential);
    gideon.executeForm(*presidential);
    gideon.signForm(*shrubbery);
    gideon.executeForm(*shrubbery);
    gideon.signForm(*robotomy);
    gideon.executeForm(*robotomy);

    delete presidential;
    delete shrubbery;
    delete robotomy;
}