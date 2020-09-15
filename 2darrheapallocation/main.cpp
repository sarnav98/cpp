#include <iostream>

using namespace std;

int main()
{
    int *a[3];
    a[0] = new int [4];
    a[1] = new int [4];
    a[2] = new int [4];

    //This is same as -> int A[3][4]; - > 3 Rows and 4 Columns
    //But here we are creating these arrays of arrays in Heap memory using pointer.
    //Each pointer is pointing towards size of 4 arrays.
}
/*
Visualization :-
   A
|     |       0 1 2 3
| [0] | ---> |- - - -|
|-----|
|     |       0 1 2 3
| [1] | ---> |- - - -|
|-----|
|     |       0 1 2 3
| [2] | ---> |- - - -|

*/

//Using double pointer for everything in HEAP

//int **a;
//a = new int *[3];
//a[0] = new int [4];
//a[1] = new int [4];
//a[2] = new int [4];
//a[3] = new int [4];

//Accessing of these arrays we need NESTED FOR LOOPS

for (int i=0;i<3;i++)
{
    for (int j =0;j<4;j++)
    {
        cout << a[i][j];
    }
}
