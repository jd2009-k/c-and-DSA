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
        int a=0;
        for (int j = 0, k = 1;j < s.size() && k < s.size() && s.size()>1;)
        {
            if (s[j] != s[k])
            {
                s.erase(s.begin() + j);
                s.erase(s.begin() + k - 1);
                if (j == 0);
                else
                {
                    j--;
                    k--;
                }
                if (a == 0)
                    a = 1;
                else
                    a = 0;
            }
            else
            {
                j++;
                k++;
            }
        }
        if (a == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }

}