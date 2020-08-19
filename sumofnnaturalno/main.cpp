#include <iostream>

using namespace std;

int main()
{
   long int n,sum;
    cout<<"Enter number \n";
    cin >> n;

    for (int i=1;i<=n;i++){ //Starting counter value = 1
        sum = sum+i; // Sum value is equal to Sum + counter => 0+1 = 1, 1+2 = 3,etc
        cout<<""<<sum<<endl;
    }
    return 0;
}
