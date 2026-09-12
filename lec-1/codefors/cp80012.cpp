#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, sum = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            int b;
            cin >> b;
            sum += b;
        }
        if (sum % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No"<<endl;
    }
}
