#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, n, sum = 0;
    cin >> n >> test;
    vector<long long int>arr(n);
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0;i < n;i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }
    for (int i = 0;i < test;i++)
    {
        long long int a, b, c;
        cin >> a >> b;
        c = n - 1 - a;
        if (c < 0)
        {
            cout << arr[n - 1 - a + b] << endl;
            continue;
        }
        cout << arr[n - 1 - a + b] - arr[n - 1 - a] << endl;
    }
}