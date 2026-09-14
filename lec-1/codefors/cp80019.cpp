#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
            cout << "YES" << endl;
        else
        {
            if (k % 2 != 0 && k <= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

}
