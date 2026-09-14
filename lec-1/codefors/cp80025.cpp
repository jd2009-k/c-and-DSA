#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n;
        cin >> n;
        vector<int>v(n), v1(n);
        for (int j = 0;j < n;j++)
        {
            cin >> v[j];
            v1[j] = v[j];
        }
        reverse(v.begin(), v.end());
        if (v[0] != v[n - 1])
        {
            if (v[0] == v[1])
                swap(v[0], v[n - 1]);
            cout << "YES" << endl;
            for (int j = 0;j < n;j++)
            {
                cout << v[j] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;

    }
}
