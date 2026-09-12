#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, min = INT_MAX, b;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        cin >> b;
        if (abs(b) < min)
            min = abs(b);
    }
    cout << min;
}
