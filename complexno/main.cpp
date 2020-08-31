#include <iostream>

using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex (int r=0, int i=0)
    {
        setReal (r);
        setImg (i);
    }

    void setReal (int r)
    {
        real = r;
    }
    void setImg (int i)
    {
        img = i;
    }
    void print ()
    {
        cout << real << "+i" << img << endl;
    }

    complex operator+(complex x)
    {
      complex temp;
      temp.real = real + x.real;
      temp.img = img + x.img;
      return temp;
    }
};

int main ()
{
    complex c1 (3,7);
    complex c2 (5,4);
    complex c3 = c1+c2;
    c3.print();
    return 0;
}
