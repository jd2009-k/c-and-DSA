#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    for (int i = 0;i < test;i++)
    {
        long long int n, min = INT_MAX, b = INT_MIN, a,d=1;
        cin >> n;
        cin>>a;
        b=a;
        for (int j = 0;j < n - 1;j++)
        {
            cin >> a;
            if (a < b)
            {
                d = 0;
            }
            if (a - b <= min)
                min = a - b;
            b = a;
        }
        if(d==1)
        cout << min / 2 + 1<<endl;
        else
        cout<<0<<endl;
    }
}
