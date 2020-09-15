#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int *p = new int [5];
    int *q = new int [10]; // Pointer Q is initialized with larger array size than P

    for (int i=0;i<5;i++) // Copying all elements of first array to 2nd array
    {
        q[i] = p[i];
    }
    delete []p; // Deleting the first array
    p = q; // Assigning P pointer to Q array
    q = NULL; // Assigning Q to NULL, since P and Q at this moment is pointing towards same location.

}
