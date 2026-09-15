#include <bits/stdc++.h>
using namespace std;

int main()
{
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./", s;
    char a;int m;
    cin >> a >> s;
    if (a == 'R')
        m = -1;
    else
        m = +1;
    for (int i = 0;i < s.size();i++)
    {
        for (int j = 0;j < k.size();j++)
        {
            if (s[i] == k[j])
            {
                s[i] = k[j + m];
                break;
            }
        }
    }
    cout << s;


}