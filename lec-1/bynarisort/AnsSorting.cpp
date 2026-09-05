#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, max = 0, sum = 0;
    cin >> n >> h;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (max < v[i])
            max = v[i];
    }
    long long int lo = 1, hi = max, mid;
    for (; lo <= hi;)
    {
        mid = (hi + lo) / 2;
        if (lo == hi)
            break;
        int sum1 = 0, j = 0, hor = 0, b = 0;
        for (; j < n; j++)
        {
            int hores = v[j] / mid;
            hor += hores;
            if (v[j] % mid > 0)
                hor++;
        }
        if (hor < h)
            hi = mid;
        else if (h < hor)
            lo = mid + 1;
        else
            break;
    }
    return mid;
}