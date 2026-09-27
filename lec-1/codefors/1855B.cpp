#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        long long int n,j;
        cin >> n;
        for (j = 1;j <= 100;j++)
        {
            if (n % j != 0)
                break;
        }
        if (j != 100)
            cout << j-1 << endl;
        else
            cout << n << endl;

    }
}
