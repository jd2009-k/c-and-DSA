#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
            cin >> v[j];
        int ans = v[n - 1] - v[0];
        for (int j = 0; j < n; j++)
        {
            ans = max(ans, v[j] - v[0]);
            ans = max(ans, v[n - 1] - v[j]);
            if (j < n - 1)
                ans = max(ans, v[j] - v[j + 1]);
        }
        cout << ans << "\n";
    }
}