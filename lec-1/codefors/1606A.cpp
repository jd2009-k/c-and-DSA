#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        string s;
        cin >> s;
        s[0] = s[s.size() - 1];
        cout << s << endl;
    }
}