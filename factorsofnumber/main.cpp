#include <iostream>
//Divide by 2 gives 0 as remainder
using namespace std;

int main()
{
    int n,i,sum;
    cout<<"Enter number \n";
    cin >> n;

    for (i=1;i<=n;i++){
        if (n%i==0){
         cout <<i<<endl;
        }
    }
    return 0;
}
