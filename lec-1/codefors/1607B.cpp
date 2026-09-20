#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int p, k;
        cin >> p >> k;
        for (long long int j = k - k % 4 + 1;j <= k;j++)
        {
            if (abs(p) % 2 == 0)
            {
                p = p - j;
            }
            else
            {
                p = p + j;
            }
        }
        cout << p << endl;
    }
}