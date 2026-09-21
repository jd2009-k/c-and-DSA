#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, max = 0, min = 100, minIND = 0, maxIND = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int>v(26, 0);
        for (int j = 0;j < n;j++)
        {
            v[s[j] - 'a']++;
        }
        for (int j = 0;j < 26;j++)
        {
            if (max <= v[j])
            {
                max = v[j];
                maxIND = j;
            }
            if (min > v[j] && v[j] != 0)
            {
                min = v[j];
                minIND = j;
            }
        }
        for (int j = 0;j < n;j++)
        {
            if (s[j] == 'a' + minIND)
            {
                s[j] = 'a' + maxIND;
                break;
            }
        }
        cout << s << endl;
    }
}