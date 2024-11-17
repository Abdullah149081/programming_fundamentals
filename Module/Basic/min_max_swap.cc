#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // MIN
    cout << "MIN:" << min({1, 2, 3, 4, 5}) << endl;

    //  MAX
    cout << "MAX:" << max({1, 2, 3, 4, 5}) << endl;

    //    Swap
    int a = 5,
        b = 10;
    swap(a, b);

    cout << a << " " << b;

    return 0;
}