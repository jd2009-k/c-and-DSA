#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;    pair<int, int>p[s.size()];
    int a = 0;
    for (int i = 0;i < s.size();i++)
    {
        p[i].first = a;
        if (s[i] == '(')
            a++;
        else
            a--;
        p[i].second = i;
    }
    sort(p, p + s.size());
    for (int i = 0;i < s.size();i++)
    {
        cout << p[i].second;
    }
}