#include <iostream>

using namespace std;

class rectconstructor
{
private:
    int l;
    int b;
/*
public:
    int getLength ()
    {
        return l;
    }
    int getBreadth ()
    {
        return b;
    }
    */
public:
    //CONSTRUCTORS//
    rectconstructor () // Non Parameterized Constructor (Intialized with values)
    {
    l = 0;
    b = 0;
    }
    rectconstructor (int l=0, int b=0) // Parameterized constructor (Parameters are passed)
    {
        setLength(l);
        setBreadth(b);
    }
    rectconstructor (rectconstructor &rect) // Copy Constructor (Copies another object)
    {
        l = rect.l;
        b = rect.b;
    }

    //FUNCTIONS
    int setLength (int len)
    {
        if (l>=0){
            l = len;
        }else{
            l = 0;
        }
    }

    int setBreadth (int bre)
    {
        if (b>=0){
            b = bre;
        }else {
            b = 0;
        }
    }

    int area ()
    {
        return l*b;
    }
    int perimeter ()
    {
        return (2*(l+b));
    }
};

int main ()
{
    rectconstructor r (20,30);
    cout << r.area();
    cout << "\n";
    cout << r.perimeter();
}
