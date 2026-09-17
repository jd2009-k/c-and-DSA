#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0;j < test;j++)
    {
        long long int n, sum = 1;
        cin >> n;
        for (int i = 2;i <= n;i *= 2)
        {
            sum += i;
            if (n % sum == 0)
            {
                cout << n / sum << endl;
                break;
            }
        }
    }
}