#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    int lo = 0, hi = m * n - 1, num, mid;
    cin >> num;
    bool flag = 0;
    for (; lo <= hi;)
    {
        mid = (long long int)(hi + lo) / 2;
        if (v[mid / m][mid % m] == num)
        {
            cout << "yes" << endl
                 << "[" << mid / m << "," << mid % m << "]";
            flag = 1;
            break;
        }
        if (v[mid / m][mid % m] > num)
            hi = mid - 1;
        if (v[mid / m][mid % m] < num)
            lo = mid + 1;
    }
    if (flag == 0)
    {
        cout << "NO";
    }
}