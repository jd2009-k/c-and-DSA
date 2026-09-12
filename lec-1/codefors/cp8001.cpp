#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int j = 0;j < n;j++)
        {
            cin >> v[j];
        }
        if (k > 1)
            cout << "YES" << endl;
        else
        {
            int b = 0;
            for (int j = 0;j < n - 1;j++)
            {
                if (v[j] <= v[j + 1]);
                else
                {
                    cout << "NO" << endl;
                    b = 1;
                    break;
                }
            }
            if (b == 0)
                cout << "YES" << endl;
        }

    }
}