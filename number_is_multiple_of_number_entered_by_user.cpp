/*
A program to check given number is multiple of number entered by user.
*/
#include <iostream>

using namespace std;

int main()
{
    int Check_num, num, flag = 1;
    cout << "Enter the Number" << endl;
    cin >> num;
    cout << "Enter the Check Number is multiple of Number" << endl;
    cin >> Check_num;
    flag = Check_num % num;
    if (flag == 0)
    {
        cout << Check_num << " is multiple of " << num << endl;
    }
    else
    {
        cout << Check_num << " is not multiple of " << num << endl;
    }
    return 0;
}