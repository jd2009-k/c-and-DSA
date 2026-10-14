#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    long long int sum = 1;
    vector<int>arr(n+1);
    arr[0] = 1;
    bool a = 0;
    for (int i = 1;i < n;i++)
    {
        cin >> arr[i];
    }
    for (int i = 1;i < n;)
    {
        sum += arr[i];
        i = sum;
        if (sum == t)
        {
            cout << "YES";
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        cout << "NO";

    }
}