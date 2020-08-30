#include <iostream>

using namespace std;

class complex
{
private:
    int real;
    int img;
public:
    complex(int r=0, int i=0)
    {
        setReal (r);
        setImaginary(i);
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    
    void setReal (int r)
    {
        real = r;
    }

     void setImaginary (int i)
    {
        img = i;
    }
    
    void print() {
        
        cout << real << " + i" << img << endl;
        
    }

};
int main()
{
    //cout << "Hello world!" << endl;
    complex c1 (2,4);
    complex c2 (3,5);
    //c2,c3;
    //c1.real=2;
    //c1.img=4;
    //c2.real=3;
    //c2.img=5;
    complex c3=c1+c2;
    c3.print();
    //cout << c3.complex() << " "<<c3.img<<endl;
    return 0;
}
