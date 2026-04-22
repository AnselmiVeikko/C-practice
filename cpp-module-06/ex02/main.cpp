#include "Base.hpp"

int main(void)
{
    Base *p = Base::generate();

    Base::identify(p);
    Base::identify(*p);
}