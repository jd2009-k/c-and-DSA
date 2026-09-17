#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0;j < test;j++)
    {
        long long int a, b, n, sum = 0;
        cin >> a >> b >> n;
        for (int i = 0;i < n;i++)
        {
            long long int d;
            cin >> d;
            if (d > a - 1)
                d = a - 1;
            sum += d;
        }
        sum += b;
        cout << sum << endl;
    }
}