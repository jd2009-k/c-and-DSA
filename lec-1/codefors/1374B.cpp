#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int number, cot = 0;
        cin >> number;
        for (cot;number > 1;cot++)
        {
            if (number % 6 == 0)
            {
                number = number / 6;
                continue;
            }
            else
            {
                number = number * 2;
                if (number % 6 != 0)
                    break;
                continue;
            }
        }
        if (number == 1)
            cout << cot << endl;
        else
            cout << -1 << endl;
    }


}