#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, sub, def, cot = 0;
        cin >> n >> sub >> def;
        string s;
        for (int j = 0;j < sub;j++)
        {
            s.push_back('a' + cot);
            if (cot < def -1)
                cot++;
        }
        for (int j = 0;j < n;j++)
        {
            cout << s[j % sub];
        }
        cout << endl;


    }
}