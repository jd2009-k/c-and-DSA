#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, d = 0, cot = 0;
        cin >> n;
        vector<long long int>v(n);
        for (int j = 0;j < n;j++)
            cin >> v[j];
        for (int j = n - 1;j != 0;)
        {
            if (v[j] > v[j - 1])
                j--;
            else
            {
                if (v[j - 1] == 0)
                {
                    d = 1;
                    break;
                }
                v[j - 1] /= 2;
                cot++;
            }
        }
        if (d == 0)
            cout << cot << "\n";
        else
            cout << -1 << "\n";
    }
}