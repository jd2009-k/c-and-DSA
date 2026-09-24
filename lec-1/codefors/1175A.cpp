#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int n, k, cot = 0;
        cin >> n >> k;
        for (;n != 0;)
        {
            cot += (n % k);
            n -=(n % k);
            if (n != 0)
            {
                n = n / k;
                cot++;
            }
        }
        cout << cot << endl;
    }
}
