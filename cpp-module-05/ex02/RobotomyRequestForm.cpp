#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) 
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    if (!this->isSigned())
        throw AForm::NotSignedException();
    else
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, 1);

        bool randomResult = dist(gen);

        if (randomResult)
            std::cout << "*LOUD DRILLING*... " << _target << " has been succesfully robotomized." << std::endl;
        else
            std::cout << "robotomization failure!" << std::endl;
        return;
    }
}