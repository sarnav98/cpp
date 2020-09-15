#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],size;
    printf ("Enter the size of the array");
    scanf ("%d",&size);
    
    if (size>50)
    {
        printf ("Enter size less than or equal to 50"); //Overflow Condition
    }else
    {
        for (int i=0;i<size;i++)
    {
        scanf ("%d",arr[i]); //Taking input of the array
    }
    
    }
}
