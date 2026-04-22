#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
            std::string _target;

    public:
            PresidentialPardonForm() = delete;
            PresidentialPardonForm(const std::string& target);
            PresidentialPardonForm(const PresidentialPardonForm& other) = delete;
            PresidentialPardonForm& operator=(const PresidentialPardonForm& other) = delete;
            ~PresidentialPardonForm();

            void execute(const Bureaucrat& executor) const override;
};