#include <iostream>

using namespace std;

int main()
{
    int arr[50],size;
    cout <<"Enter the size of the array \n";
    cin >> size;

    if (size>50)
    {
        cout <<"The size entered is greater than 50";
    }else
    {
        for (int i=0;i<size;i++)
        {
            cin >> arr[i];
        }

        cout <<"The elements of the array are: ";
        for (int i=0;i<size;i++)
        {
            cout <<" "<<arr[i];
        }
    }
    return 0;
}
