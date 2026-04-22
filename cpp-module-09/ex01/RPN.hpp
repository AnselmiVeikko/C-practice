#pragma once

#include <string>

class RPN
{
    public:
            RPN() = delete;
            RPN(const RPN& other) = delete;
            RPN& operator=(const RPN& other) = delete;
            ~RPN() = delete;

    
    static void execute(const std::string& formula);
};