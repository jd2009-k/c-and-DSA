#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, cot;
    cin >> n;
    vector<int>v(n);
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
        sum1 += v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0;i < n;i++)
    {
        sum1 -= v[i];
        sum2 += v[i];
        if (sum2 > sum1)
        {
            cot = i;
            break;
        }
    }
    cout << cot + 1 << endl;

}