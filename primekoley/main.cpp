#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,flag=1;
    cout << "Enter the number \n";
    cin >> n;

    for (int i=2;i<=sqrt(n);i++)
    {
        if ( n%i == 0)
      {
         flag = 0;
         break;
      }

    }

    if (flag==1)
    {
        cout << "prime";
    }else
    {
        cout <<"not prime";
    }

    return 0;
}
