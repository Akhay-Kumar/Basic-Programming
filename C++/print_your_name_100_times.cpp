/*
C++ Program to print your name 100 times.
*/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

#define max 200

int main()
{
    char name[max];
    int i;
    cout << "Enter the name :" << endl;
    cin.get(name, max);
    for (i = 0; i <= 100; i++)
    {
        cout << i << "\t" << name << endl;
    }
    return 0;
}