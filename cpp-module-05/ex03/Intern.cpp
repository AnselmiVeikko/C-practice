#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>
#include <functional>

Intern::Intern()
{}

Intern::~Intern()
{}

AForm* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
    static const std::map<std::string, std::function<AForm*(const std::string&)>> forms = {
        {"ShrubberyCreationForm", [](const std::string& target) {return new ShrubberyCreationForm(target); }},
        {"PresidentialPardonForm", [](const std::string& target) {return new PresidentialPardonForm(target); }},
        {"RobotomyRequestForm", [](const std::string& target) {return new RobotomyRequestForm(target); }}
    };

    auto it = forms.find(formName);
    if (it != forms.end())
    {
        AForm* form = it->second(formTarget);
        std::cout << "Intern creates " << form->getName() << std::endl;
        return form;
    }
    else
    {
        std::cout << "There is no such form as " << formName << std::endl;
        return nullptr;
    }
}