#include <iostream>
//DIVISIBLE BY 1 and ITSELF
using namespace std;

int main()
{
    int n,count=0;
    cout <<"Enter number \n";
    cin >> n;

    for (int i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }

    }
     if (count == 2){
        cout <<"It's a prime number "<<endl;
     }else
     cout <<"It's not a prime "<<endl;

}
