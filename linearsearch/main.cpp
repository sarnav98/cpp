#include <iostream>

using namespace std;

int main()
{
    int A[10], n=10,key;
    cout <<"Enter the numbers \n";

    for (int i =0;i<n;i++){
        cin >> A[i];
    }

    cout <<"Enter the element you want to find ";
    cin >> key;

    for (int i=0;i<n;i++)
    {
        if (key == A[i])
        {
            cout <<"Found the key at \n"<<i<<endl;
        }else {
            cout <<"Key is not found "<<endl;
        }
    }
}
