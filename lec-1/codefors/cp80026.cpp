#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, cot = 0;
        cin >> n;
        vector<long long int>v(n);
        for (int j = 0;j < n;j++)
        {
            cin >> v[j];
        }
        for (int j = 0;j < n - 1;j++)
        {
            if (v[j] % 2 == 0 && v[j + 1] % 2 == 0)
                cot++;
            else if (v[j] % 2 != 0 && v[j + 1] % 2 != 0)
                cot++;
        }
        cout << cot << endl;
    }
}
