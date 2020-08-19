#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"Enter number 1 \n";
    cin >> a;
    cout <<"Enter number 2 \n";
    cin>>b;
    cout <<"Enter number 3 \n";
    cin>>c;

    if (a>b && a>c){
        cout <<"A is the greatest with the number "<<a;
    }else if (b>a && b>c) {
        cout <<"B is the greatest with the number "<<b;
    }else if (c>a && c>b) {
        cout <<"C is the greatest with the number "<<c;
    }else
        return 0;
}
