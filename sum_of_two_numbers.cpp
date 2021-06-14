/*
C++ program to calculate sum of two numbers
*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;
    cout << "Enter First Number: " << endl;
    cin >> a;
    cout << "Enter Second Number: " << endl;
    cin >> b;
    sum = a + b;
    cout << "The Sum of " << a << " and " << b << " is " << sum << endl;
    return 0;
}