#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> s1;
    int n, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        // if(b==0)
        // b=INT_MAX;
        s1.push_back(b);
    }
    d = s1.size() - 1;
    for (int i = 0; i < s1.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < d; j++)
        {
            if ((s1[j] > s1[j + 1] || (s1[j] == 0)) && s1[j + 1] != 0)
            {
                swap(s1[j], s1[j + 1]);
                c++;
            }
        }
        d--;
        if (c == 0)
            break;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        // if(s1[i]==INT_MAX)
        // s1[i]=0;
        cout << s1[i] << " ";
    }
}