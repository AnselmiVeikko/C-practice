#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) 
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    if (!this->isSigned())
        throw AForm::NotSignedException();
    else
    {
        //fill with what is needed.
        std::ofstream ofs(_target + "_shrubbery");
        if (!ofs)
            throw std::runtime_error("Failed to open file");

        ofs << R"(   
                       _-_
                    /~~   ~~\
                 /~~         ~~\
                {               }
                 \  _-     -_  /
                   ~  \\ //  ~
                _- -   | | _- _
                  _ -  | |   -_
                      // \\)" << std::endl;
        return;
    }
}