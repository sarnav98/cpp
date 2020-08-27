#include <iostream>

using namespace std;

int main()
{
    int A[7] = {1,2,3,4,5,6,99};
    //int n = 7; //Number of elements
    int max; //Maximum value of the element in the array
    max = A[0]; //Initially MAX is having the value of Index Element 0 i.e 1

    for (int i=0;i<7;i++)
    {
        if (A[i]>max)
        {
            max = A[i];
        }
    }
    cout <<max<<endl;
}
