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
        int j = 0, k = n - 1;
        for (;s[j] != s[k] && j < k;)
        {
            j++;
            k--;
        }
        if (j == k)
            cout << 1 << endl;
        else if (j > k)
            cout << 0 << endl;
        else
            cout << k - j + 1 << endl;
    }

}
