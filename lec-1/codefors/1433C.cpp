#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, max = 0, c = -1;
        cin >> n;
        vector<int>v(n);
        for (int j = 0;j < n;j++)
        {
            cin >> v[j];
        }
        for (int j = 0;j < n;j++)
        {
            if (max <= v[j])
            {
                max = v[j];
                c = j;
            }
        }
        if (c == n - 1 && v[c] == v[c - 1])
        {
            for (;v[c] == v[c - 1] && c > 0;)
            {
                c--;
            }
            if (c == 0)
                cout << -1 << "\n";
            else
                cout << c + 1 << "\n";
            continue;
        }
        cout << c + 1 << "\n";
    }
}
// input


// 6
// 5
// 5 3 4 4 5
// 3
// 1 1 1
// 5
// 4 4 3 4 4
// 5
// 5 5 4 3 2
// 3
// 1 1 2
// 5
// 5 4 3 5 5


// output

// 3
// -1
// 4
// 3
// 3
// 1


