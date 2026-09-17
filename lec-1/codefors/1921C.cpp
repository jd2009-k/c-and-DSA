#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, f, a, b, num1 = 0, num2, d;
        cin >> n >> f >> a >> b;
        for (int j = 0;j < n;j++)
        {
            cin >> num2;
            if ((num2 - num1) * a > b)
                f = f - b;
            else
                f = f - (num2 - num1) * a;
            num1 = num2;
        }
        if (f > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}