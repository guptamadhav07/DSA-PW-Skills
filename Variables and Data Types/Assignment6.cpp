#include <iostream>
using namespace std;
int main()
{
    cout << "Size of fundamental data types";
    cout << "The " << sizeof(char) << " sizeof(char) is : 1 bytes";
    cout << "The " << sizeof(short) << " sizeof(short) is : 2 bytes";
    cout << "The " << sizeof(int) << " sizeof(int) is : 4 bytes";
    cout << "The " << sizeof(long) << "  sizeof(long) is: 4 bytes";
    cout << "The " << sizeof(long long) << " sizeof(long long) is : 8 bytes";
    cout << "The " << sizeof(float) << " sizeof(float) is : 4 bytes";
    cout << "The " << sizeof(double) << " sizeof(double) is : 8 bytes";
    cout << "The " << sizeof(long double) << " sizeof(long double) is : 12 bytes";
    cout << "The " << sizeof(bool) << " sizeof(bool) is : 1 bytes";
    return 0;
}