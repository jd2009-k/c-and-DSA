#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int w, ans = 0, ans2 = 0;
        cin >> w;
        ans = w / 6;
        if (ans == 0 && w % 6 != 4)
        {
            cout << -1 << endl;
            continue;
        }
        if (w % 6 != 0)
        {
            if (w % 6 == 2 || w % 6 == 4)
                ans++;
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        ans2 = w / 4;
        if (w % 4 != 0)
        {
            if (w % 4 == 2)
            {
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }
        cout << ans << " " << ans2 << endl;


    }
}