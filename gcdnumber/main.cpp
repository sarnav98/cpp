#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m;
    cin>>n;
    while (m!=n){
    if (m>n){
        m = (m-n);
    }else if (n>m){
        n = (n-m);
    }
    cout << m <<endl;
    }
}
