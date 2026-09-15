#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, minn, b = 0, red = 0;
        string s1;
        cin >> n >> s1;

        for (int j = 1; j < n - 1; j++)
        {
            if (s1[j - 1] == s1[j + 1])
            {
                if (s1[j] != s1[j - 1])
                {
                    red = max(red, 2);
                    b = 1;
                }
            }
            else if (s1[j] != s1[j - 1] && s1[j] != s1[j + 1])
                red = max(red, 1);
        }

        for (int j = 0; j < s1.size() - 1; j++)
        {
            if (s1[j] == s1[j + 1])
            {
                s1.erase(s1.begin() + j + 1); j--;
            }
        }
        minn = s1.size();

        if (b == 1)
            cout << minn - 2 << endl;
        else if (s1.size() <= 2)
            cout << minn << endl;
        else
            cout << minn - red << endl;
    }
}
