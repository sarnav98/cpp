#include <iostream>
//Sum of the cube of the digits = Number itself
using namespace std;

int main()
{
    int n,sum=0,r,m;
    cout <<"Enter the number you want to check \n";
    cin >> n;
    m = n;

    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum = sum + r*r*r;
    }

    if (sum == m)
    {
        cout <<"It's an armstrong number";
    }else {
        cout <<"It's not an armstrong number";
    }

    return 0;
}
