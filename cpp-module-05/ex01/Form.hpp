#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
            private:
                    const std::string _name;
                    bool              _signed;
                    const int         _gradeToSign;
                    const int         _gradeToExec;

            public:
                    // Constructors/Destructor
                    Form() = delete;
                    Form(const std::string& name, int gradeToSign, int gradeToExec);
                    Form(const Form& other);
                    Form& operator=(const Form& other) = delete;
                    ~Form();

                    // Getters
                    const std::string& getName() const;
                    int                getGradeToSign() const;
                    int                getGradeToExec() const;
                    bool               isSigned() const;

                    // Member functions
                    void beSigned(const Bureaucrat& bureaucrat);
            
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

std::ostream& operator<<(std::ostream& os, const Form& form);