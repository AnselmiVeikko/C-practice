#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>


Base* Base::generate()
{
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(1, 3);

        int randomResult = dist(gen);

        switch (randomResult)
        {
            case 1: return new A;
            case 2: return new B;
            case 3: return new C;
        }
        return nullptr;
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void Base::identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception&) {}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (const std::exception&) {}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (const std::exception&) {}
}


Base::~Base()
{}