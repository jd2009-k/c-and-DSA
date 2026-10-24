#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, k;
        cin >> n >> k;
        pair<long long int, long long int>p[n];
        for (int j = 0;j < n;j++)
        {
            long long int a;
            cin >> a;
            if (a % k == 0)
                p[j].first = -k;
            else
                p[j].first = -a % k;
            p[j].second = j + 1;
        }
        sort(p, p + n);
        for (int j = 0;j < n;j++)
        {
            cout << p[j].second << " ";
        }
        cout << endl;
    }
}