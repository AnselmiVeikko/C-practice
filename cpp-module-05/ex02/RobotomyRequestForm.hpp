#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
            std::string _target;

    public:
            RobotomyRequestForm() = delete;
            RobotomyRequestForm(const std::string& target);
            RobotomyRequestForm(const RobotomyRequestForm& other) = delete;
            RobotomyRequestForm& operator=(const RobotomyRequestForm& other) = delete;
            ~RobotomyRequestForm();

            void execute(const Bureaucrat& executor) const override;
};