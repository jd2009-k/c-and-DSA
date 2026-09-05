#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, trip, min = LONG_MAX;
    cin >> n >> trip;
    vector<long long int> t(n);
    for (int i = 0; i < t.size(); i++)
    {
        cin >> t[i];
        if (t[i] < min)
            min = t[i];
    }
    long long int lo = min, hi = min * trip, mid;
    for (; lo <= hi;)
    {
        mid = (lo + hi) / 2;
        long long int sum = 0;
        if (hi == lo)
            break;
        for (int j = 0; j < t.size(); j++)
            sum += mid / t[j];
        if (sum >= trip)
            hi = mid;
        if (sum < trip)
            lo = mid + 1;
    }
    cout << mid;
    return mid;
}