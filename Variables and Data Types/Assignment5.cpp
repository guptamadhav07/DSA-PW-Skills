#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, temp;
    cout << "Before swapping value of a is " << a << " value of b is " << b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping value of a is " << a << " value of b is " << b;
    return 0;
}