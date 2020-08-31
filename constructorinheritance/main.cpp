#include <iostream>

using namespace std;

class Base
{
public:

    Base ()
    {
        cout << "NON PARAMETERIZED of BASE CLASS \n";
    }

    Base (int x)
    {
        cout << "PARAMETERIZED OF BASE CLASS "<<x<<endl;
    }
};

class Derived : public Base
{
    public:
    Derived ()
    {
        cout << "Non parameterized constructor of Derived class";
    }

    Derived (int y)
    {
        cout << "Parameterized constructor of Derived class "<<y<<endl;
    }

    Derived (int x, int y) : Base (x)
    {
        cout << "Parameterized constructor of Derived class "<<y<<endl;
    }
};

int main ()
{
    Derived d (20,30);
}
