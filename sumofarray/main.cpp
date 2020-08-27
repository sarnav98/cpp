#include <iostream>

using namespace std;

int main()
{
    int A[7] = {4,6,2,1,4,2,5};
    int sum=0;

    for (int i=0;i<7;i++){
        sum = sum + A[i];
        cout <<sum<<endl;
    }
}
