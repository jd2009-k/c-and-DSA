#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, count = 0, c = 0;
    cin >> m >> n;
    vector<int>arr(m);
    for (int i = 0;i < m;i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0;i < n;i++)
        if (arr[i] <= 0)
            count += arr[i];
    cout << endl << -count;
}