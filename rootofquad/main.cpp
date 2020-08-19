#include <iostream>
#include <cmath>
//Root of quad equation => r = (-b + sqrt(b*b-4*a*c))/(2*a)
using namespace std;

int main()
{
    int a,b,c,r,r2;

    cout << "Enter the value of A \n";
    cin>>a;
    cout << "Enter the value of B \n";
    cin>>b;
    cout << "Enter the value of C \n";
    cin>>c;

    r = (-b + sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    cout << "The positive value of the root of the quad eq is \n"<<r;
    cout << "\n \nThe negetive value of the root of the quad eq is \n"<<r2;
    return 0;
}
