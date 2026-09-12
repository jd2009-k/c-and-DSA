#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, m, b = 0;
        cin >> n >> m;
        int f = n, cot = 0;
        vector<int>v;
        string s1, s2;
        cin >> s1 >> s2;
        for (int j = 0;j < n;j++)
        {
            if (s1[j] == s2[0])
            {
                v.push_back(j);
            }
        }
        for (;f < m;)
        {
            f = f * 2;
            cot++;

        }
        for (int j = 0;j < v.size();j++)
        {
            int c = v[j], d = b;
            for (int k = 0;k < m;k++)
            {
                if (s1[(c + k) % n] == s2[k])
                {

                }
                else
                {
                    b++;
                    break;
                }
            }
            if (d == b)
            {
                if (c + m > f || (cot == 0 && c + m > n))
                {
                    cout << cot + 1 << endl;
                }
                else
                {
                    cout << cot << endl;
                }
                break;
            }
            if (b == v.size())
            {
                cout << "-1" << endl;
                break;
            }

        }
    }
}