#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

// Constructors/Destructor

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{}

Bureaucrat::~Bureaucrat()
{}

// Getters

const std::string& Bureaucrat::getName() const { return _name; }
int      Bureaucrat::getGrade() const          { return _grade; }

// Member functions

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
    }
    catch (const std::exception& e)
    {
        std::cout << _name << " couldn't sing " << form.getName() << " because " << e.what() << std::endl;
        return ;
    }
    std ::cout << _name << " signed " << form.getName() << std::endl;
}

// Custom exceptions

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "Grade too low";
}

// Overload operator

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}