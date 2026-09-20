#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, b = 0, c = 0;
        cin >> n;
        vector<int>v(n);
        for (int j = 0;j < n;j++)
        {
            cin >> v[j];
        }
        for (int j = 0;j < n;j++)
        {
            b = 0;
            c = 0;
            for (int k = 1;k < n;k++)
            {
                if (abs(v[k] - v[k - 1]) == 1 && v[k] < v[k - 1])
                {
                    swap(v[k], v[k - 1]);
                    b++;
                }
                else if (v[k] > v[k - 1])
                    c++;
            }
            if (b == 0)
                break;
        }
        if (b == 0 && c != n - 1)
        {
            cout << "NO\n";
            continue;
        }
        else
            cout << "YES\n";
    }
}