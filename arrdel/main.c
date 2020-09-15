#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],size,pos;

    printf ("Enter the size of the array \n");
    scanf ("%d",&size);

    for (int i=0;i<size;i++)
    {
        scanf ("%d",&arr[i]);
    }

    printf ("Enter the position you want to delete \n");
    scanf ("%d",&pos);

    for (int i=pos-1;i>=size-1;i--)
    {
        arr[i] = arr[i+1];
    }
    size--;

    for (int i=0;i<size;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}
