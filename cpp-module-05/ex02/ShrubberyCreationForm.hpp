#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
            std::string _target;

    public:
            ShrubberyCreationForm() = delete;
            ShrubberyCreationForm(const std::string& target);
            ShrubberyCreationForm(const ShrubberyCreationForm& other) = delete;
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other) = delete;
            ~ShrubberyCreationForm();

            void execute(const Bureaucrat& executor) const override;
};