#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b = 1;
    cin >> n;
    vector<int>v = { 4,7,44,77,47,74,444,777,447,474,744,747,774,477 };
    for (int i = 0;i < v.size();i++)
    {
        if (n % v[i] == 0)
        {
            cout << "YES";
            b = 0;
            break;
        }
    }
    if (b == 1)
    {
        cout << "NO";
    }

}