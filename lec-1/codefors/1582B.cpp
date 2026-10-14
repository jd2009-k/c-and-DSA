#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, one = 0, zero = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            long long int b;
            cin >> b;
            if (b == 1)
                one++;
            else if (b == 0)
                zero++;
        }
        cout << (long long int)(pow(2, zero) * one) << endl;
    }

}