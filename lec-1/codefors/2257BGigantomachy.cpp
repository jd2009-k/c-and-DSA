#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, m, sum1 = 0, sum2 = 0, b = 0;
        cin >> n >> m;
        int arr[n], brr[m];
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
        }
        for (int j = 0;j < m;j++)
        {
            cin >> brr[j];
        }
        for (int j = 0;j < n - 1;j++)
        {
            sum1 += arr[j] + 1 - arr[j + 1];
        }
        sum1 += arr[n - 1];
        for (int j = 0;j < m - 1;j++)
        {
            sum2 += brr[j] + 1 - brr[j + 1];
        }
        sum2 += brr[m - 1];
        if (sum1 >= sum2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}