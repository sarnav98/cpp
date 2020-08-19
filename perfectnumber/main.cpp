#include <iostream>
//SUM OF THE FACTORS OF THE NUMBER = DOUBLE THE NUMBER => Perfect Number
using namespace std;

int main()
{
    int n,sum=0;
    cout <<"Enter the number \n";
    cin>>n;

    for (int i=1;i<=n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if (2*n==sum){
        cout <<"Perfect number ";

    }else
    cout <<"Not a perfect number ";
}


