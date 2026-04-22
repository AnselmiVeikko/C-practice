#pragma once

class Base
{
    public:

        virtual ~Base();

        static Base* generate();

        static void identify(Base* p);

        static void identify(Base& p);
};