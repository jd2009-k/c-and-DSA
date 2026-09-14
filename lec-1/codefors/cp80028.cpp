#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if ((n - b - a) > 1 || (a == n && b == n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
