#include <iostream>

using namespace std;

int main()
{
    int arr[50],size,key;

    cout <<"Enter the size of the array \n";
    cin >> size;

    cout <<"Enter the elements of the array \n";
    for (int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    cout <<"Enter the key that you want to find \n";
    cin >> key;

    for (int i=0;i<size;i++)
    {
        if (key==arr[i])
        {
            return i;
        }
    }
    return -1;
}
