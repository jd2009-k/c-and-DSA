#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, a, b, c, d = 1;
        cin >> n;
        int arr[n];
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
        }
        for (int j = 0;j < n - 2;j++)
        {
            a = j;
            d = 1;
            for (int k = j + 1;k < n;k++)
            {
                if (d == 1)
                {
                    if (arr[k] > arr[j])
                    {
                        b = k;
                        d++;
                    }
                }
                else if (d == 2)
                {
                    if (arr[b] > arr[k])
                    {
                        d++;
                        c = k;
                    }
                    else
                        b = k;
                }
                else if (d == 3)
                    break;
            }
            if (d == 3)
                break;
        }
        if (d == 3)
        {
            cout << "YES" << endl << a + 1 << " " << b + 1 << " " << c + 1 << endl;
        }
        else
            cout << "NO" << endl;
    }
}