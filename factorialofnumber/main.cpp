#include <iostream>

using namespace std;

int main()
{
   long int n,fact=1;
    cout<<"Enter number \n";
    cin >> n;

    for (int i=1;i<=n;i++){ //Starting counter value = 1
        fact = fact*i; // Sum value is equal to Sum + counter => 0+1 = 1, 1+2 = 3,etc
        cout<<""<<fact<<endl;
    }
    return 0;
}
