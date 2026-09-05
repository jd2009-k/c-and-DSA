#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    b = b / 2;
    c = c / 4;
    d = min(a, min(b, c));
    d = d * 7;
    cout << d;
}