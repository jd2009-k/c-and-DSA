#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, maxn = -1, a = 1;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s = s + s;
        vector<int>v1, v2;
        for (int j = 0;j < n * 2;j++)
        {
            if (a == 1 && s[j] == c)
            {
                v1.push_back(j);
                a = 0;
            }
            if (a == 0 && s[j] == 'g')
            {
                v2.push_back(j);
                a = 1;
            }
        }
        for (int j = 0;j < min(v1.size(), v2.size());j++)
        {
            maxn = max(maxn, v2[j] - v1[j]);
        }
        if (c == 'g')
            cout << 0 << endl;
        else
            cout << maxn << endl;
    }

}