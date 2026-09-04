#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int lo = 0, hi = n - 1, mid;
    for (; lo <= hi;)
    {
        mid = (long long int)(lo + hi) / 2;
        if (v[mid - 1] <= v[mid] && v[mid + 1] < v[mid])
            break;
        if (v[mid] >= v[mid - 1] && v[mid + 1] >= v[mid])
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    cout << mid << endl;
    reverse(v.begin(), v.begin() + mid + 1);
    reverse(v.begin() + mid + 1, v.end());
    reverse(v.begin(), v.end());
    int num;
    cin >> num;
    lo = 0;
    hi = n - 1;
    bool flag = 0;
    for (; lo <= hi;)
    {
        mid = (long long int)(lo + hi) / 2;
        if (v[mid] == num)
        {
            cout << "yes";
            flag = 1;
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
    if (flag == 0)
        cout << "n0";
}