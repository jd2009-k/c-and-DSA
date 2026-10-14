#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, cot1 = 0, cot2 = 0;
        cin >> n;
        string s;
        vector<int>a(256, 0), b(256, 0);
        cin >> s;
        for (int j = 0;j < n;j++)
        {
            if (a[s[j]] == 0)
            {
                cot1++;
            }
            a[s[j]]++;

        }
        for (int j = n - 1; j >= 0;j--)
        {
            if (a[s[j]] > 1 && b[s[j]] == 0)
            {
                cot1++;
            }
            else if (a[s[j]] == 1 && b[s[j]] > 0)
                cot1--;
            b[s[j]]++;
            a[s[j]]--;
            cot2 = max(cot1, cot2);
        }
        cout<<cot2<<endl;
    }
}