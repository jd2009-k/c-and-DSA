#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n;
        cin >> n;
        for (int j = 0;j < n - 4;j++)
        {
            cout << 3;
        }
        if (n == 1 || n == 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << 66 << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            cout << 3366 << endl;
        }
        else
        {
            cout << 6366 << endl;
        }
    }
}
