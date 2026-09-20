#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cot = 0;;
    cin >> n >> k;
    vector<int>arr(n);
    for (int i = 0;i < n;i++)
        cin >> arr[i];
    for (int i = 0;i < n - 1;i++)
    {
        if (arr[i] < arr[i + 1])
        {

        }
        else
        {
            cot = cot + ((arr[i] - arr[i + 1]) / k) + 1;
            arr[i + 1] = arr[i + 1] + (((arr[i] - arr[i + 1]) / k) + 1) * k;
        }
    }
    cout << cot << endl;
}