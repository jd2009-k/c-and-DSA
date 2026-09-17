#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int a, b, c, d, cot = 0;
        cin >> a >> b >> c >> d;
        if (min(a, b) < c && max(a, b) > c)
            cot++;
        if (min(a, b) < d && max(a, b) > d)
            cot++;
        if (cot == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}