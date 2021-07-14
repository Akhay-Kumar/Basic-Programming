/*
Find first and last digits of a number
Given a number and to find first and last digit of a number.
Examples: 
Input : 12345 
Output : First digit: 1
         last digit : 5

Input : 98562
Output : First digit: 9
         last digit : 2
*/
#include<iostream>

using namespace std;

int findfirst(int num)
{
    int first;
    while(num >= 10)
    {
        num = num / 10;
    }
    return num;

};

int findlast(int num)
{ 
    int last;
    last = num % 10;
    return last;
};

int main()
{
    int num;
    cout << "Enter a Number :" <<endl;
    cin >> num;
    cout << "The first digit of the Number is :";
    cout << findfirst(num) << endl;
    cout << "The last digit of the number is :";
    cout << findlast(num) << endl;
    return 0;
}