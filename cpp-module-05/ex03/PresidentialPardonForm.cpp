#include "PresidentialPardonForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) 
    : AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}


void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    if (!this->isSigned())
        throw AForm::NotSignedException();

    else
    {
        std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
        return;
    }
}