#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, b, c, d;
        cin >> n >> b >> c;
        if (n % b == 0)
        {
            d = n - n / b;
        }
        else
        {
            d = n - n / b - 1;
        }
        if (d <= c)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}