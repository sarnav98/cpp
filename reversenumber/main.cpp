#include <iostream>
#include <cmath>
//Reverse the number and check if palindrome - Reverse of the number = Number itself
using namespace std;

int main()
{
    int n, rev=0, m, r;
    cout <<"Enter the number you want to reverse and check palindrome \n";
    cin >> n;
    n=m;


    while (n>0)
    {
        r = n%10;
        n = n/10;
        rev = rev*10+r;
    }

    cout <<"The reverse of the number is "<<rev<<endl;

    if (rev == m)
    {
        cout <<"It's a palindrome number as well. "<<endl;

    }else
    {
        cout <<"It's not a palindrome number. "<<endl;
    }
    return 0;
}
