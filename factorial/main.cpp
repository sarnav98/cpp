#include <iostream>

using namespace std;

int main()
{
    int n,fact=1;
    cout <<"Enter a number \n";
    cin>>n;

    for (int i=1;i<=n;i++){
        //if(n%i==0){
            fact = fact*i;
            cout << fact<<endl;
        }
}

