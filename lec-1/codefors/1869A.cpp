#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, sum = 0, cot = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            int b;
            cin >> b;
            sum = sum ^ b;
            if (b == 0)
                cot++;
        }
        if (cot == n)
        {
            cout << 0 << endl;
            continue;
        }
        else if (sum == 0)
        {
            cout << 1 << endl << 1 << " " << n << endl;
        }
        else if (n % 2 == 0)
        {
            cout << 2 << endl << 1 << " " << n << endl << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
}