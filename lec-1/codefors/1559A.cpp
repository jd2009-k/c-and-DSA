#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, b, sum;
        cin >> n;
        cin >> b;
        sum = b;
        for (int j = 1;j < n;j++)
        {
            cin >> b;
            sum &= b;
        }
        cout << sum << endl;
    }
}