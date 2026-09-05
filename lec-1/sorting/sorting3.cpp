#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        v.push_back(b);
    }
    for (int i = 1; i < n; i++)
    {
        int val = v[i];
        for (int j = 0; j < i; j++)
        {
            if (j == 0 && val < v[j])
            {
                v.insert(v.begin(), val);
                v.erase(v.begin() + i + 1);
                break;
            }
            else if (j == i - 1 && val >= v[j])
            {
                break;
            }
            else if (v[j] <= val && v[j + 1] >= val)
            {
                v.insert(v.begin() + j + 1, val);
                v.erase(v.begin() + i + 1);
                break;
            }
        }
    }
    for (int i : v)
    {
        cout << i << " ";
    }
}