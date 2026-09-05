#include <bits/stdc++.h>
using namespace std;
void disply(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
int main()
{
    int n, a = INT_MIN, b = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > a)
            a = v[i];
    }
    for (int i = 0; i < n; i++)
    {
        b = b + a - v[i];
    }
    cout << b;
}