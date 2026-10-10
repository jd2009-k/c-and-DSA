#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, max = 1;
        cin >> n;
        vector<long long int>v(n);
        for (int k = 0;k < n;k++)
        {
            cin >> v[k];
        }
        sort(v.begin(), v.end());
        int b = 1;
        for (int j = 0;j < n - 1;j++)
        {
            if (v[j] == v[j + 1])
                b++;
            else
                b = 1;
            if (b > max)
                max = b;
        }
        if (max == n)
        {
            cout << 0 << "\n";
        }
        else
        {
            float d = (float)n / max;
            int cot = 0;
            for (int c = 1;d > (float)c;c *= 2)
                cot++;
            cout << (n - max) + cot << endl;

        }
    }
}
