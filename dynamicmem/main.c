#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int *p;
    //p = new int[5]; // Dynamic Memory Allocation in Heap using CPP
    p = (int *) malloc (5 * sizeof(int)); // Dynamic Memory allocation in Heap
    //Deallocation in CPP -> delete []p;
    free (p); // Deallocation in C
}
