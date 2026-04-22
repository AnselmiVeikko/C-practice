#include "RPN.hpp"
#include <iostream>
#include <stack>

void RPN::execute(const std::string& formula)
{
    std::stack<int> stack;

    bool space_expected = false;

    for (char c : formula)
    {
        if (space_expected == true && c != ' ')
        {
            std::cerr << "Error: missing space between values/operators" << std::endl;
            return ;
        }

        space_expected = false;

        if (c >= '0' && c <= '9') 
        {
            int digit = c - '0';
            stack.push(digit);
            space_expected = true;
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error: not enough values entered for operator: " << c << std::endl;
                return ;
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();

            switch(c)
            {
                case '+': stack.push(a + b); break;
                case '-': stack.push(a - b); break;
                case '*': stack.push(a * b); break;
                case '/':
                     if (b == 0)
                     {
                        std::cerr << "Error: division by zero" << std::endl;
                        return ;
                     }
                     else
                     {
                        stack.push(a / b);
                        break;
                     }
            }
            space_expected = true;
        }
        else if (c == ' ') 
        {
            continue ;
        }
        else 
        {
            std::cerr << "Error: invalid character/value detected: " << c << std::endl;
            return ;
        }
    }
    if (stack.size() != 1)
    {
        std::cerr << "Error: Invalid RPN formula" << std::endl;
        return ;
    }
    std::cout << stack.top() << std::endl;
}