#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, min = 1000, max = 1000, b = 1000;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;

        for (int j = 0; j < n; j++)
        {
            if (j > 0 && s[j] != s[j - 1])
            {
                b = 1000;
                min = 1000;
                max = 1000;
            }
            if (s[j] == '<')
                b++;
            else
                b--;
            if (b > max)
                max = b;
            if (b < min)
                min = b;
            if ((max - min) + 1 > ans)
                ans = (max - min) + 1;
        }
        cout << ans << endl;
    }
}
