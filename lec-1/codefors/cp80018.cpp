#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int n, c = 0, min = 0;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            int b;
            cin >> b;
            if (b == 1)
                c = -1;
            c++;
            if (min < c)
                min = c;
        }
        cout << min;
        cout << endl;
    }

}
