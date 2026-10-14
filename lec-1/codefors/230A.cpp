#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, int>p[n];
    for (int i = 0;i < n;i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    bool b = 0;
    sort(p, p + n);
    for (int i = 0;i < n;i++)
    {
        if (p[i].first < s)
            s = s + p[i].second;
        else
        {
            b = 1;
            break;
        }
    }
    if (b == 1)
        cout << "NO";
    else
        cout << "YES";
}