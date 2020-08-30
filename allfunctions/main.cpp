#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    //---------------NON PARAMETERIZED CONSTRUCTOR----------------
    rectangle()
    {
        //Initialize with values like -> length = 0, breadth =0
        //length = value;
        //breadth = value;
    }
    //-----------------PARAMETERIZED CONSTRUCTOR-----------------
    rectangle (int l, int b)
    {
        //setLength & setBreath functions are called ->
        //setLength (l);
        //setBreath (b);
    }
    //-----------------COPY CONSTRUCTOR----------------
    rectangle (rectangle &r)
    {
        //Copy of the created object is called
        //length = r.length;
        //breadth = r.breadth;
    }

    //-------------------MUTATORS----------------------

    void setLength (int l)
    {
        //length = l;
    }

     void setBreadth (int b)
    {
        //breadth = b;
    }

    //----------------------ACCESSORS------------------------

    int getLength ()
    {
        return length;
    }

    int getBreadth ()
    {
        return breadth;
    }

    //---------------FUNCTIONS (FACILITATORS)---------------

    int area ()
    {
        return length*breadth;
    }

    int perimeter ()
    {
        return (2*(length+breadth));
    }

    //------------------ENQUIRY FUNCTION----------------------

    int isSquare()
    {

    }

    //--------------------DESCRUCTOR------------------------------
    ~rectangle()
    {

    }

};
