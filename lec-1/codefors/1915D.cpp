#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int j = 1;j < n;)
        {
            if ((s[j + 2] == 'b' || s[j + 2] == 'c' || s[j + 2] == 'd') && (s[j + 1] == 'b' || s[j + 1] == 'c' || s[j + 1] == 'd') && j != n - 1)
            {
                cout << s[j - 1] << s[j] << s[j + 1];
                if (j != n - 2)
                    cout << '.';
                j += 3;
            }
            else
                if ((s[j + 1] == 'b' || s[j + 1] == 'c' || s[j + 1] == 'd') && j != n - 1 && j == n - 2)
                {
                    cout << s[j - 1] << s[j] << s[j + 1];
                    if (j != n - 2)
                        cout << '.';
                    j += 3;
                }
                else
                {
                    cout << s[j - 1] << s[j];
                    if (j != n - 1)
                        cout << '.';
                    j = j + 2;
                }
        }
        cout << endl;
    }
}