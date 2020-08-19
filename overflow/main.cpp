#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //WHEN THE VALUE OF THE LAST POSSIBLE DIGIT OF ANY DATA TYPE IS REACHED
    //IT WILL GO BACK TO THE CYCLIC STARTING POINT OF THAT DATA TYPE.

    char x = 127;
    ++x;
    cout <<(int) x;
    return 0;

}
