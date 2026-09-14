#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, m = 0, n1 = 0, x = 1;
        cin >> n;
        int arr[n];
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
            if (arr[j] == 2)
                m++;
        }
        if (m == 0)
        {
            cout << x << endl;
            continue;
        }
        for (x;m > n1;x++)
        {
            if (arr[x - 1] == 2)
            {
                n1++;
                m--;
            }
        }
        if (m == n1)
        {
            cout << x - 1 << endl;
            continue;
        }
        else
            cout << -1 << endl;




    }

}
