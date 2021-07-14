#include<iostream>

using namespace std;

void swap(int *num1,int *num2)
{
    int temp;
    int *ptr1,*ptr2;
    ptr1 = num1;
    ptr2 = num2;

    temp = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}

int main()
{
    int num1,num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "Number before swap :" << num1 << " and " << num2 << endl;
    swap(&num1,&num2);
    cout << "Number after swap :" << num1 << " and " << num2 << endl;
    return 0;
}