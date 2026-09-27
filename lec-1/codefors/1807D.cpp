#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, test2;
        cin >> n >> test2;
        long long int sum = 0;
        vector<long long int>v(n + 1, 0);
        for (int j = 1;j <= n;j++)
        {
            cin >> v[j];
            sum += v[j];
            v[j] = sum;
        }
        for (int j = 0;j < test2;j++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if ((sum - (v[b] - v[a - 1]) + (b - a + 1) * c) % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }

    }
}