#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, sum = 0;
        cin >> n;
        for (int j = 0;j < n - 2;j++)
        {
            long long int b;
            cin >> b;
            sum += b;
        }
        long long int a, b;
        cin >> a >> b;
        cout << b - (a - sum) << endl;
    }
}