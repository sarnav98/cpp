#include <iostream>

using namespace std;

class rectclass
{
    public:
    int length;
    int breadth;

    int area ()
    {
        return length*breadth;
    }

    int perimeter ()
    {
        return 2*(length + breadth);
    }
};

int main ()
{
    rectclass r1, r2;
    r1.length = 10;
    r1.breadth = 5;
    cout << r1.area()<<endl;
    cout <<r1.perimeter()<<endl;
    cout << "\n";
    r2.length = 15;
    r2.breadth = 10;
    cout << r2.area()<<endl;
    cout << r2.perimeter()<<endl;
}
