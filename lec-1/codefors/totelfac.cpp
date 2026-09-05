#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        if (c[0] == 'T')
            b = b + 4;
        else if (c[0] == 'C')
            b = b + 6;
        else if (c[0] == 'O')
            b = b + 8;
        else if (c[0] == 'D')
            b = b + 12;
        else if (c[0] == 'I')
            b = b + 20;
    }
    cout << b;
}
