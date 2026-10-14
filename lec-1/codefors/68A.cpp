#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p1, p2, p3, p4, a, b;
    cin >> p1 >> p2 >> p3 >> p4 >> a >> b;
    p1 = min(p1, min(p2, min(p3, p4)));
    p2 = min(p1, b);
    if (p2 >= a)
    {
        if (p2 == 0 && a == 0)
        {
            cout << 1;
        }
        else if (p2 == b && p1 != b)
            cout << p2 - a + 1;
        else
            cout << p2 - a;
    }
    else
    {
        cout << 0;
    }

}