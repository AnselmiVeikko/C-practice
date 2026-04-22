#pragma once

#include <string>

class AForm;

class Intern
{
    public:
            Intern();
            Intern(const Intern& other) = delete;
            Intern& operator=(const Intern& other) = delete;
            ~Intern();

            AForm* makeForm(const std::string& formName, const std::string& formTarget);
};