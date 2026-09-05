#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, c, d, e = 0, f = 0;
    cin >> n >> m;
    a = c = n;
    b = d = m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int loop = (3 * min(n, m)) / 2 + 1;
    for (int i = 0; i < loop; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << arr[0][j] << " ";
        }
        c--;
        vector<vector<int>> brr(d, vector<int>(c));
        for (int h = 0; h < d; h++)
        {
            for (int j = 0; j < c; j++)
                brr[h][j] = arr[j + 1][d - h - 1];
        }
        arr.assign(d, vector<int>(c));
        for (int h = 0; h < d; h++)
        {
            for (int j = 0; j < c; j++)
                arr[h][j] = brr[h][j];
        }
        int temp = d;
        d = c;
        c = temp;
    }
    cout << endl;
    return 0;
}
