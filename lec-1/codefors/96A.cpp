#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;int a1 = 0, a2 = 0;
    cin >> s;
    for (int i = 0;i < s.size();i++)
    {
        if (s[i] == '1')
        {
            a2 = 0;
            a1++;
        }
        else
        {
            a1 = 0;
            a2++;
        }
        if (a1 >= 7 || a2 >= 7)
        {
            cout << "YES\n";
            a1 = -1;
            break;
        }
    }
    if (a1 != -1)
        cout << "NO\n";
}