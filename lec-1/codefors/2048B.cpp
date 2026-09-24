#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, k;
        cin >> n >> k;
        int a = 1, b = n;

        for (;a <= b;)
        {
            for (int j = 0;j < k - 1 && a < b;j++, b--)
            {
                cout << b << " ";
            }
            if (a <= b)
            {
                cout << a << " ";
                a++;
            }
        }
        cout << endl;

    }
}