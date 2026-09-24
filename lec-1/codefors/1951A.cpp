#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, a1 = 0, a2 = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int j = 0;j < s.size();j++)
        {
            if (s[j] == '1' && s[j+1]=='1' && j!=s.size()-1)
                a2++;
            if (s[j] == '1')
                a1++;
        }
        if (a1 % 2 == 0 && (a2!=1 || a1!=2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
