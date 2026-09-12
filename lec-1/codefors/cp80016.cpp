#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, p1 = 0, n1 = 0, tot = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            int x;
            cin >> x;
            if (x == 1)
                p1++;
            else
                n1++;
        }
        if (p1 - n1 < 0)
        {
            if ((n1 - p1) % 2 != 0)
            {
                int n2=n1 -((n1 - p1) / 2 + 1);
                if (n2 % 2 == 0)
                    cout << (n1 - p1) / 2 + 1 << endl;
                else
                    cout << (n1 - p1) / 2 + 2 << endl;
            }
            else
            {
                int n2=n1 -((n1 - p1) / 2);
                if (n2 % 2 == 0)
                    cout << (n1 - p1) / 2 << endl;
                else
                    cout << (n1 - p1) / 2 + 1 << endl;
            }
        }
        else
        {
            if (n1 % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
}
