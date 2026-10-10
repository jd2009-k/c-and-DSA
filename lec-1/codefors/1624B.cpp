#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        int d = b - a;
        if ((b + d) % c == 0 && (b + d) > 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if ((c - a) % 2 == 0)
        {
            d = (c - a) / 2;
            if ((c - d) % b == 0 && (c - d) > 0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        d = c - b;
        if ((b - d) % a == 0 && (b - d) > 0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}