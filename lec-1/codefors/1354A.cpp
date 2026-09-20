#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int s, f, se, n;
        cin >> s >> f >> se >> n;
        s = s - f;
        if (s <= 0)
        {
            cout << f << endl;
            continue;
        }
        if (se - n <= 0)
        {
            cout << -1 << endl;
            continue;
        }
        if (s % (se - n) == 0)
            cout << (s / (se - n)) * se + f << endl;
        else
            cout << (s / (se - n) + 1) * se + f << endl;

    }
}