#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            int b;
            cin >> b;
            cout << n - b + 1 << " ";
        }
        cout << endl;
    }

}
