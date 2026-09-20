#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxa = INT_MIN;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        float b;
        cin >> b;
        if (sqrt(b) == (int)sqrt(b))
        {
        }
        else
            if (maxa < b)
                maxa = b;
    }
    cout << maxa;
}