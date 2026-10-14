#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, r;
    cin >> n >> r;
    pair<int, int>p[n];
    for (int i = 0;i < n;i++)
    {
        cin >> p[i].first;
        p[i].second = i + 1;
    }
    sort(p, p + n);
    reverse(p, p + n);
    cout << p[r - 1].first << endl << "";
    for (int i = 0;i < r;i++)
        cout << p[i].second << " ";
}