#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors/Destructor

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec) 
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other) 
    : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{}

AForm::~AForm()
{}

// Getters

const std::string& AForm::getName() const        { return _name;        }
int                AForm::getGradeToSign() const { return _gradeToSign; }
int                AForm::getGradeToExec() const { return _gradeToExec; }
bool               AForm::isSigned() const       { return _signed;      }

// Member functions

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw AForm::GradeTooLowException();
}

// Custom exceptions

const char* AForm::GradeTooHighException::what() const noexcept
{
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const noexcept
{
    return "Grade is too low";
}

const char* AForm::NotSignedException::what() const noexcept
{
    return "this form is not signed";
}

// Overload operator

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << AForm.getName() << std::endl;
    os << "Signed: " << std::boolalpha << AForm.isSigned() << std::endl;
    os << "Grade to sign: " << AForm.getGradeToSign() << std::endl;
    os << "Grade to execute: " << AForm.getGradeToExec() << std::endl;
    return os;
}