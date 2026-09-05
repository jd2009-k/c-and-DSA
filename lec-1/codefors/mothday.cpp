#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, d;
    cin >> n >> m;
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
        d = 31;
    else
        d = 30;
    if (n == 2)
        d = 28;
    d = d + m - 1;
    if (d % 7 == 0)
        cout << d / 7;
    else
        cout << d / 7 + 1;
}
