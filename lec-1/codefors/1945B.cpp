#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int a, b, k;
        cin >> a >> b >> k;
        cout << k / a + k / b + 2 << endl;
    }
}