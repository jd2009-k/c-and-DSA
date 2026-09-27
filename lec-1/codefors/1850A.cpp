#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        long long int n, k, cot = 1, sub = 1;
        cin >> n >> k;
        vector<long long int>v(n);
        for (int j = 0;j < n;j++)
            cin >> v[j];
        sort(v.begin(), v.end());
        for (int j = 0;j < n - 1;j++)
        {
            if (v[j + 1] - v[j] <= k)
                sub++;
            else
                sub = 1;
            if (cot < sub)
                cot = sub;
        }
        cout << n - cot << endl;

    }
}
