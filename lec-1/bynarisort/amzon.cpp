#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int num;
    cin >> num;
    int lo = 0, hi = 1, mid;
    for (; lo <= hi;)
    {
        mid = (long long int)(lo + hi) / 2;
        if (v[mid] == num)
        {
            break;
        }
        if (v[mid] > num)
        {
            hi = mid - 1;
        }
        if (v[mid] < num)
        {
            lo = mid + 1;
        }
    }
    cout << mid;
}