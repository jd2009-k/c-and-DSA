#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int a, b;
        cin >> a >> b;
        long long int c = abs(a - b);
        cout << abs(a - b) << " ";
        if (c != 0)
            if (a % c == 0)
            {
                cout << 0 << endl;
                continue;
            }
            else if (a % abs(a - b) > abs(a - b) / 2)
                cout << abs(a - b) - a % abs(a - b) << endl;
            else
                cout << a % abs(a - b) << endl;
        else
            cout << 0 << endl;
    }
}