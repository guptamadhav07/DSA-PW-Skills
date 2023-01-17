#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < 50 && a < b)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}