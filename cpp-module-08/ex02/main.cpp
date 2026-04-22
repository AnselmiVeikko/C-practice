#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << "---TESTING MUTANTSTACK---\n" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Mutantstack top: " << mstack.top() << std::endl;
    
    mstack.pop();

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "CONTENTS OF MSTACK: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    MutantStack newStack = mstack;

    std::cout << "CONTENTS OF MSTACK COPY: " << std::endl;
    for (auto it = newStack.begin(); it != newStack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "\n---MUTANTSTACK TEST ENDS---" << std::endl;

    std::cout << "\n---IDENTICAL TEST WITH LIST---\n" << std::endl;

    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << "lst back(top):" << lst.back() << std::endl;
    
    lst.pop_back();

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();

    ++lst_it;
    --lst_it;

    std::cout << "CONTENTS OF LST: " << std::endl;
    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << std::endl;
        ++lst_it;
    }

    std::cout << "\n---TEST WITH LIST ENDS---\n" << std::endl;
    
    return 0;
}