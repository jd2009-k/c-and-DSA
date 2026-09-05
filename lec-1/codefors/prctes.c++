#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int y = x;
    if (x >= 0)
        cout << "\n"
             << y;
    else
        cout << "\n"
             << x - (1 + x - y);

    return 0;
}