#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (n % 2 == 0)
        {
            if (k >= 2 && x != 2)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int j = 0; j < n / 2;j++)
                    cout << 2 << " ";
                cout << endl;
            }
            else if (k >= 1 && x != 1)
            {
                cout << "YES" << endl;
                cout << n << endl;
                for (int j = 0; j < n;j++)
                    cout << 1 << " ";
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if (k >= 1 && x != 1)
            {
                cout << "YES" << endl;
                cout << n << endl;
                for (int j = 0; j < n;j++)
                    cout << 1 << " ";
                cout << endl;
            }
            else if (k >= 3)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                cout << 3 << " ";
                for (int j = 0; j < n / 2 - 1;j++)
                    cout << 2 << " ";
                cout << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}
