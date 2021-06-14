#include <iostream>
#include <cstdio>

#define SWAP(a, b) \
    {              \
        int temp;  \
        temp = a;  \
        a = b;     \
        b = temp;  \
    }

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first Number :" << endl;
    cin >> a;
    cout << "Enter the second Number :" << endl;
    cin >> b;
    cout << "Number before SWAP : " << a << "\t" << b << endl;
    SWAP(a, b);
    cout << "Number After SWAP : " << a << "\t" << b << endl;
    return 0;
}