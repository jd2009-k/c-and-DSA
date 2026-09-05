#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, min, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        min = v[i];
        for (int j = i; j < n; j++)
        {
            if (min > v[j])
            {
                min = v[j];
                d = j;
            }
        }
        swap(v[i], v[d]);
    }
    for (int i : v)
    {
        cout << i << " ";
    }
}