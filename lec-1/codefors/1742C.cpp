#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int c=0;
        for (int j = 0;j < 8;j++)
        {
            int R = 0;
            string s;
            cin >> s;
            for (int k = 0;k < 8;k++)
            {
                if (s[k] == 'R')
                    R++;
            }
            if(R==8)
            {
                c=1;
            }
        }
        if (c==1)
            cout << 'R' << endl;
        else
            cout << 'B' << endl;
    }
}
