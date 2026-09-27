#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char a = 'B';
        for (int j = 0; j < n; j++) {
            if (s[j] != '?') {
                a = (s[j] == 'B') ? ((j % 2 == 0) ? 'B' : 'R') : ((j % 2 == 0) ? 'R' : 'B');
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (s[j] != '?')
            {
                if (s[j] == 'B') a = 'R';
                else a = 'B';
                continue;
            }
            if (s[j] == '?')
            {
                if ((j > 0 && j + 1 < n && s[j - 1] == 'R' && s[j + 1] == 'B') || (j > 0 && j + 1 < n && s[j - 1] == 'B' && s[j + 1] == 'R'))
                {
                    s[j] = 'B';
                    a = 'R';
                }
                else if ((j > 0 && s[j - 1] == 'B') || (j + 1 < n && s[j + 1] == 'B' && s[j + 1] != '?'))
                {
                    s[j] = 'R';
                    a = 'B';
                }
                else if ((j > 0 && s[j - 1] == 'R') || (j + 1 < n && s[j + 1] == 'R' && s[j + 1] != '?'))
                {
                    s[j] = 'B';
                    a = 'R';
                }
                else
                {
                    s[j] = a;
                    if (s[j] == 'B')
                        a = 'R';
                    else
                        a = 'B';
                }
            }
        }
        cout << s << "\n"; 
    }
    return 0;
}
