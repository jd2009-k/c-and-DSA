#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, a, total = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            cin >> a;
            total = (a ^ total);
        }
        if (n % 2 != 0)
            cout << total << endl;
        else
        {
            if (total == 0)
                cout << total << endl;
            else
                cout << -1 << endl;
        }
    }
}
