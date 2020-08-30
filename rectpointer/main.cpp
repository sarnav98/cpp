#include <iostream>

using namespace std;

class rectpoint
{
    private:
    int length;
    int breadth;

    public:
    int area ()
    {
        return length*breadth;
    }
    int perimeter ()
    {
        return (2*length+breadth);
    }

    void setLength (int l)
    {
        if (l>=0){
        length = l;
        }else {
        length = 0;
        }
    }
    void setBreadth (int b)
    {
        if (b>=0){
        breadth = b;
        }else {
        breadth = 0;
        }
    }

    int getLength ()
    {
        return length;
    }
    int getBreadth ()
    {
        return breadth;
    }
};
/*
int main () // Object in STACK
{
    rectpoint r1;
    rectpoint *p;
    p = &r1;
    p->length=10;
    p->breadth=20;
    cout << p->area();
}
*/

int main () //Object in Heap
{
    rectpoint *p = new rectpoint ();
    p->setLength(10);
    p->setBreadth (20);
    cout << p->area();
    cout << "\n";
    cout << p->perimeter();
    cout << "\n";
    cout << "Length of the rectangle is "<<p->getLength();
    cout << "\n";
    cout << "Breath of the rectangle is "<<p->getBreadth();
}
