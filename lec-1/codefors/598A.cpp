#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int number, b = 1, sum;
        cin >> number;
        sum = (number * (number + 1)) / 2;
        for (;;)
        {
            if (b > number)
            {
                break;
            }
            sum = sum - 2 * b;
            b *= 2;

        }
        cout << sum << endl;
    }
}