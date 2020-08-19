#include <iostream>
#include <cmath>

//Sum of N natural Number => Sum = n*(n+1)/2

using namespace std;

int main()
{
    int sum, n;
    cout << "Enter the value of N \n";
    cin >> n;
    sum = (n*(n+1))/2;
    cout <<"The sum of Nth Natural number that is entered is "<<sum;
    return 0;
}
