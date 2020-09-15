#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],size,num,position;
    printf ("Enter the size of the array \n");
    scanf ("%d",&size);

    if (size>50)
    {
        printf ("Enter size less than or equal to 50"); //Overflow Condition
    }
    else
    {
        for (int i=0; i<size; i++)
        {
            scanf ("%d",&arr[i]); //Taking input of the array
        }
    printf ("Enter the number you want to insert \n");
    scanf ("%d",&num);
    printf ("Enter the position you want to insert \n");
    scanf ("%d",&position);
    for (int i=size-1;i>=position-1;i--)
    {

        arr[i+1] = arr[i];
    }
    arr[position-1] = num;
    size++;

    for (int i=0;i<size;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
    }
}
