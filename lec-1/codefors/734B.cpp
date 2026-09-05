#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    for (; a > 0 && c > 0 && d > 0;)
    {
        sum += 256;
        a--;
        c--;
        d--;
    }
    for (; a > 0 && b > 0;)
    {
        sum += 32;
        a--;
        b--;
    }
    cout << sum << endl;
}