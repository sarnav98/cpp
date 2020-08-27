#include<iostream>
using namespace std;
class powerfind
{

/* Function to calculate x raised to the power y */
public:
int power(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
};

/* Driver code */
int main()
{
    powerfind g;
    int x = 2;
    int y = 3;

    cout << g.power(x, y);
    return 0;
}
