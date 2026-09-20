#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int a = 0;a < test;a++)
    {
        int n, minn = 0;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n));
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < n;j++)
                cin >> arr[i][j];
        }
        int sum = 0;
        for (int x = 0, y = 0; x >= 0 && y < n;y++)
        {
            minn = 0;
            for (int b = x, c = y;b < n && c < n;b++, c++)
            {
                minn = min(minn, arr[b][c]);
            }
            sum += minn;
        }
        for (int y = 0;y < n - 1;y++)
        {
            minn = 0;
            for (int b = n - 1, c = y; b >= 0 && c >= 0;b--, c--)
            {
                minn = min(minn, arr[b][c]);
            }
            sum += minn;
        }
        cout << -sum << endl;
    }
}