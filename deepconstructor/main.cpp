#include <iostream>

using namespace std;

class Test
{
    public:
    int a;
    int *p;

    Test (int x)
    {
        a = x;
        p = new int [a];
    }

    Test (Test &t)
    {
        a = t.a;
        //p = t.p; (Should not write this else it will point to the first object)
        p = new int [a];
    }
};


int main ()
{
    Test t (5);
}
