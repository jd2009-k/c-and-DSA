#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cout << (char)('a' + a);
        a++;
        if (a == min(k, 26))
            a = 0;
    }
}