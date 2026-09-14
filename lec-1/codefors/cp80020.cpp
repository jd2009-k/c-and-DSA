#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int x1, y1, x2, y2, cot = 0, b = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        if (y2 < y1)
        {
            cout << -1 << endl;
        }
        else
        {
            cot = y2 - y1;
            b = 1;
            x1 += y2 - y1;
        }
        if (b == 1)
        {
            if (x2 <= x1)
            {
                cot += x1 - x2;
            }
            else
            {
                cout << -1 << endl;
                b = 0;
            }
        }
        if (b == 1)
            cout << cot << endl;


    }

}
