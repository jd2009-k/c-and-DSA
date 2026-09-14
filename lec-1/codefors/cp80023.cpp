#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, b = 0, c = 0;
        cin >> n;
        int arr[n];
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
                b = -1;
        }
        if (b != -1)
            for (int j = 0;j < n;j++)
            {
                for (int k = j + 1;k < n;k++)
                {
                    if (gcd(arr[j], arr[k]) <= 2)
                    {
                        c = 1;
                        break;
                    }
                }
                if (c == 1)
                    break;
            }
        if (b == -1 || c == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

}
