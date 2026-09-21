#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, x, max = 0, sum = 0;
        cin >> n >> x;
        for (int j = 0;j < n;j++)
        {
            long long int b;
            cin >> b;
            max += b / x;
            sum += b;
            if (b % x != 0)
            {
                max++;
            }
        }
        if (sum % x == 0)
            cout << sum / x;
        else
            cout << sum / x + 1;
        cout << " " << max << "\n";
    }
}