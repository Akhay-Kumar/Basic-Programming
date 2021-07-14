#include <iostream>

using namespace std;

int main()
{
    int i,n,array[20],small,pos;
    cout << "Enter the Number of element in the array :" << endl;
    cin >> n;
    cout << "Enter the element : " << endl;
    for(i=0;i<n;i++)
    {
        cin >> array[i];
    }
    small = array[0];
    pos = 0;
    for(i=0;i<n;i++)
    {
        if(small>array[i])
        {
            small = array[i];
            pos = i;
        }
    }
    cout << "The smallest element is :" << small << endl;
    cout << "The position of the smallest element in the array is :" << pos << endl;
    return 0;
}