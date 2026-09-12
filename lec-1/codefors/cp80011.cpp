#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, mainf, d = 0;
        cin >> n;
        vector<long long int>a(n);
        for (int j = 0;j < n;j++)
        {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        int k = n / 2, m = n / 2;
        for (int j = n / 2;j != n - 1 && a[j] == a[j + 1];j++, k = j)
        {
        }

        for (int j = n / 2;j != 0 && a[j] == a[j - 1];j--, m = j)
        {
        }

        if (k == n - 1 && m == 0)
        {
            cout << -1;
            d = -1000;
        }
        else if (k == n - 1)
            mainf = m;
        else
            mainf = k + 1;
        if (d != -1000)
        {
            cout << mainf << " " << n - mainf << endl;
            for (int j = 0;j < n;j++)
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;

    }
}
