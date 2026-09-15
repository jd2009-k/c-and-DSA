#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    if (k > n - (n / 2))
    {
        cout << (k - n + n / 2) * 2;
    }
    else
        cout << k * 2 - 1;
}