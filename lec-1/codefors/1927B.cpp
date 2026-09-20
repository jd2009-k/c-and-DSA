#include <bits/stdc++.h>
using namespace std;
int bayenari(int n, vector<int>& arr)
{
    for (int i = 0;i < 26;i++)
    {
        if (arr[i] == n)
        {
            arr[i]++;
            return i;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        vector<int>arr(26, 0);
        int n;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            int b;
            cin >> b;
            cout << (char)('a' + bayenari(b, arr));
        }
        cout << endl;
    }
}