#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
            private:
                    const std::string _name;
                    bool              _signed;
                    const int         _gradeToSign;
                    const int         _gradeToExec;

            public:
                    // Constructors/Destructor
                    AForm() = delete;
                    AForm(const std::string& name, int gradeToSign, int gradeToExec);
                    AForm(const AForm& other);
                    AForm& operator=(const AForm& other) = delete;
                    virtual ~AForm();

                    // Getters
                    const std::string& getName() const;
                    int                getGradeToSign() const;
                    int                getGradeToExec() const;
                    bool               isSigned() const;

                    // Member functions
                    void               beSigned(const Bureaucrat& bureaucrat);
                    virtual void       execute(const Bureaucrat& executor) const = 0;
            
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

            class NotSignedException : public std::exception
            {
                public:
                        virtual const char* what() const noexcept;
            };

                
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);