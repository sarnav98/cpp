#include <iostream>

using namespace std;

class Base
{
    public:
    int func ()
    {
        return 0;
    }

    int func2 ()
    {
        return 0;
    }

    int func3 ()
    {
        return 0;
    }
};

class Derived : public Base
{
    int func4 ()
    {
        return 0;
    }

    int func5 ()
    {
        return 0;
    }
};

int main ()
{
    Base *p; //Base class pointer
    p = new Derived (); //Derived class object
    p->func();
    p->func2();
    p->func3();
}
