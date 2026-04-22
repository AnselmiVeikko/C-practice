#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors/Destructor

Form::Form(const std::string& name, int gradeToSign, int gradeToExec) 
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& other) 
    : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{}

Form::~Form()
{}

// Getters

const std::string& Form::getName() const        { return _name;        }
int                Form::getGradeToSign() const { return _gradeToSign; }
int                Form::getGradeToExec() const { return _gradeToExec; }
bool               Form::isSigned() const       { return _signed;      }

// Member functions

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

// Custom exceptions

const char* Form::GradeTooHighException::what() const noexcept
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const noexcept
{
    return "Grade is too low";
}

// Overload operator

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << form.getName() << std::endl;
    os << "Signed: " << std::boolalpha << form.isSigned() << std::endl;
    os << "Grade to sign: " << form.getGradeToSign() << std::endl;
    os << "Grade to execute: " << form.getGradeToExec() << std::endl;
    return os;
}