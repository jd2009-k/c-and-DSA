#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, cot = 0;
        cin >> n;
        vector<int>v(n);
        for (int j = 0;j < n;j++)
            cin >> v[j];
        for (int j = 0;j < n - 1;j++)
        {
            if (v[j] == 0 && v[j + 1] != 0)
                cot++;
        }
        if (v[n - 1] == 0)
            cot++;
        if (v[0] == 0)
            cot--;
        if (v[n - 1] == 0)
            cot--;
        if (cot == -1)
        {
            cout << 0 << "\n";
            continue;
        }
        if (cot == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        if (cot > 0)
        {
            cout << 2 << "\n";
            continue;
        }
    }
}