#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n1, n2, k;
        cin >> n1 >> k;
        n2 = n1 / 2 + 1;
        vector<long long int>v(n1 * k);
        for (int j = 0;j < n1 * k;j++)
        {
            cin >> v[j];
        }
        long long int sum = 0;
        for (int j = (n1 * k) - n2, m = 0;j >= 0 && m < k;j -= n2, m++)
            sum = sum + v[j];
        cout << sum << endl;
    }
}