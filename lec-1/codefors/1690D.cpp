#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, k, w = 0, minx = INT_MAX;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int j = 0;j < k;j++)
        {
            if (s[j] == 'W')
                w++;
        }
        minx = min(minx, w);
        for (int j = k;j < n;j++)
        {
            if (s[j] == 'W')
                w++;
            if (s[j - k] == 'W')
                w--;
            minx = min(minx, w);
        }
        cout << minx << endl;

    }
}