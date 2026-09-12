#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, c, b = 0, un = 0;
        cin >> n;
        if (n % 2 == 0)
        {
            c = n / 2;
        }
        else
        {
            c = (n + 1) / 2;
        }
        vector<int>v(n);
        for (int j = 0;j < n;j++)
        {
            cin >> v[j];
        }
        for (int j = 0;j < n;j++)
        {
            int co = 1;
            if (v[j] != -1)
            {
                un++;
                for (int k = j + 1;k < n;k++)
                {
                    if (v[j] == v[k])
                    {
                        v[k] = -1;
                        co++;
                    }
                }
                if (co == c || co==n)
                {
                    b = 1;
                }
            }
        }
        if (b == 1 && un<=2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}