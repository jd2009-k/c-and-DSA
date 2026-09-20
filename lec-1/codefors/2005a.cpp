#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    for (int k = 0;k < test;k++)
    {
        int n, a = 0, e = 0, i = 0, o = 0, u = 0;
        cin >> n;
        for (int j = 1;j <= n;j++)
        {
            switch (j % 5)
            {
            case 1:
                a++;
                break;
            case 2:
                e++;
                break;
            case 3:
                i++;
                break;
            case 4:
                o++;
                break;
            case 0:
                u++;
                break;
            }
        }
        for (int j = 0;j < a;j++)
            cout << "a";
        for (int j = 0;j < e;j++)
            cout << "e";
        for (int j = 0;j < i;j++)
            cout << "i";
        for (int j = 0;j < o;j++)
            cout << "o";
        for (int j = 0;j < u;j++)
            cout << "u";
        cout << endl;
    }
}