#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, m = 0, c = 0;
        cin >> n;
        int arr[n];
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
            m = max(arr[j], m);
        }
        for (int j = 0;j < n;j++)
        {
            int b = m - arr[j];
            if (b % 2 != 0)
            {
                cout << "NO" << endl;
                c = -1;
                break;
            }
        }
        if (c == -1)
            continue;
        cout << "YES" << endl;

    }
}