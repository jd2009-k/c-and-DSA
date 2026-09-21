#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, y = 0;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        long long int b;
        cin >> b;
        if (b % 2 == 0)
            x++;
        else
            y++;
    }
    if (x > y)
        cout << y;
    else
        cout << x;
}