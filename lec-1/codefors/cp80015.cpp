#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int x, k;
        cin >> x >> k;
        if (x % k == 0)
            cout << 2 << endl << x - 1 << " " << 1 << endl;
        else
            cout << 1 << endl << x << endl;
    }

}
