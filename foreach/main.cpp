#include <iostream>

using namespace std;

int main()
{
    int A[5]={5,3,1,5,2};

    for (int &x:A){
        cout <<++x<<endl;
    }
}
