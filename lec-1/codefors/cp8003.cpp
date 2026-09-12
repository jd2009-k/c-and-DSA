#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, dot = 0, w = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int j = 0;j < s.size();j++)
        {
            if (s[j] == '.')
            {
                dot++;
                w++;
            }
            else
                w = 0;
            if (w == 3)
                break;
        }
        if (w == 3)
            cout << 2 << endl;
        else
            cout << dot << endl;
    }
}