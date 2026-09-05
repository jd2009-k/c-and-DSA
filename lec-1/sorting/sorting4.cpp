#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float b = INT_MAX, c = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] - v[i + 1] < 0)
        {
            b = min(b, (float)((v[i] + v[i + 1]) / 2.0));
        }
        else
        {
            c = max(c, (float)((v[i] + v[i + 1]) / 2.0));
        }
    }
    if (b >= c)
        cout << c << " To " << (int)b;
    else
        cout << -1;
}