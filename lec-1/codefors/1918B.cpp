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
        vector<int>a(n), b(n), c(n);
        for (int j = 0;j < n;j++)
            cin >> a[j];
        for (int j = 0;j < n;j++)
            cin >> b[j];
        for (int j = 0;j < n;j++)
            c[a[j] - 1] = b[j];

        for (int j = 1;j <= n;j++)
            cout << j << " ";
        cout << "\n";
        for (int j = 0;j < n;j++)
            cout << c[j] << " ";
        cout << "\n";
    }
}