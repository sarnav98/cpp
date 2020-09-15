#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[50],size,position;
    printf ("Enter the size of the array \n");
    scanf ("%d",&size);
    printf ("Enter the elements of the array \n");
    for (int i=0;i<size;i++)
    {
        scanf ("%d", &arr[i]);
    }

    printf ("Enter the position from where you want to delete the data \n");
    scanf ("%d", &position);

    //////////////////////////
    for (int i=position-1;i>=size-1;i--)
    {

        arr[i] = arr[i+1];
    }
    size--;
    /////////////////////////////////////

    for (int i=0;i<size;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
    }

