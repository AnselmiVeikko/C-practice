#pragma once

#include <string>
#include <exception>

class AForm;

class   Bureaucrat
{
    private:
            const std::string _name;
            int               _grade;

    public:

            // Constructors/Destructor
            Bureaucrat() = delete;
            Bureaucrat(const std::string& name, int grade);
            Bureaucrat(const Bureaucrat& other);
            Bureaucrat& operator=(const Bureaucrat& other) = delete;
            ~Bureaucrat();

            // Getters
            const std::string& getName() const;
            int                getGrade() const;

            // Member functions
            void               incrementGrade();
            void               decrementGrade();
            void               signForm(AForm& form);
            void               executeForm(const AForm& form);


    class GradeTooHighException : public std::exception
    {
        public:
                virtual const char* what() const noexcept;
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
                virtual const char* what() const noexcept;
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);