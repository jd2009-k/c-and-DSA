#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    for (;b != 0;)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        vector<int> c(n);
        for (int j = 0; j < n; j++)
        {
            cin >> c[j];
        }

        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            int diff = abs(c[j] - (j + 1));
            ans = gcd(ans, diff);
        }

        cout << ans << "\n";
    }
    return 0;
}
