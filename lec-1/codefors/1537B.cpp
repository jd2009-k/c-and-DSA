#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int a, b, c, d;
        cin >> c >> d >> a >> b;
        if (sqrt((a - 1) * (a - 1) + (b - 1) * (b - 1)) + sqrt((a - c) * (a - c) + (b - d) * (b - d)) >= sqrt((a - c) * (a - c) + (b - 1) * (b - 1)) + sqrt((a - 1) * (a - 1) + (b - d) * (b - d)))
            cout << 1 << " " << 1 << " " << c << " " << d << endl;
        else
            cout << c << " " << 1 << " " << 1 << " " << d << endl;
    }
}