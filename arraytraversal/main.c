#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50], size;
    printf ("Enter the size of the array \n");
    scanf ("%d",&size);

    if (size>50){
    printf ("Only 50 elements can be inputted");
    }else{
    for (int i=0;i<size;i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("The elements in the array are: ");
    for (int i=0;i<size;i++)
    {
    printf ("%d ",arr[i]);
    }
    }
}
