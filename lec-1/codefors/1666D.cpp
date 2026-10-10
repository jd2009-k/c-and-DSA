#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        string s1, s2, s3 = "";
        cin >> s1 >> s2;
        vector<int>v(26, 0);
        for (int k = 0;k < s2.size();k++)
        {
            v[s2[k] - 'A']++;
        }
        for (int k = s1.size() - 1;k >= 0;k--)
        {
            if (v[s1[k] - 'A'] > 0)
            {
                s3 = s3 + s1[k];
                v[s1[k] - 'A']--;
            }
        }
        reverse(s3.begin(), s3.end());
        if (s2 == s3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}