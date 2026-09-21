#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, dash = 0, under_ = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            char b;
            cin >> b;
            if (b == '-')
                dash++;
            else
                under_++;
        }
        cout << ((dash * dash) / 4) * (under_) << "\n";
    }
}