#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        long long int c, k = 0; 
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            long long int b;
            cin >> b;
            
            if (b <= j * 2 || b <= (c - 1 - j) * 2)
            {
                k = 1; 
            }
        }
        if (k == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
