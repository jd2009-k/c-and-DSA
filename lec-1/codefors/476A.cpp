#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m;
    if (n % 2 == 0)
        a = n / 2;
    else
        a = n / 2 + 1;
    if (a % m != 0)
        a = a + (m - a % m);
    if (a > n)  
        cout << "-1";
    else
        cout << a;


}