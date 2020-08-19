#include <iostream>

using namespace std;

int main()
{
    float bs;
    float percentAllow;
    float percentDeduction;
    float ns;

    cout << "Enter the Basic Salary \n";
    cin>>bs;
    cout << "Enter the Percent of Allowance \n";
    cin>>percentAllow;
    percentAllow = (percentAllow/100);
    cout << "Enter the Percent of Deduction \n";
    cin>> percentDeduction;
    percentDeduction = (percentDeduction/100);
    ns = (bs+(bs*percentAllow))-(bs*(percentDeduction));
    cout << "The net salary = "<<ns;
    return 0;

}
