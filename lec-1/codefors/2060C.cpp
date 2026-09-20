#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int j = 0;j < test;j++)
    {
        long long int n, k, cot = 0;
        cin >> n >> k;
        vector<long long int>arr(n);
        for (int i = 0;i < n;i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        long long int lo = 0, hi = n - 1;
        for (;lo < hi;)
        {
            if (k == arr[lo] + arr[hi])
            {
                hi--;
                lo++;
                cot++;
            }
            else if (arr[lo] + arr[hi] < k)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
        cout << cot << endl;
    }
}