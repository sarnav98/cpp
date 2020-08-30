#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return length*breadth;
    }

    int perimeter ();
};

int rectangle::perimeter () //Scope resoltion
{
    return 2*(length+breadth)
}
