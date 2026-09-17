#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
                arr[j] = 2;
        }
        for (int j = 1;j < n;j++)
        {
            if (arr[j] % arr[j - 1] == 0)
                arr[j]++;
        }
        for (int j = 0;j < n;j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}