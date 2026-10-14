#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, maxx = -1, minx = 1001;
    cin >> n >> x;
    for (int i = 0;i < n;i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        maxx = max(maxx, a);
        minx = min(minx, b);
    }
    if (maxx > minx)
        cout << -1;
    else if (x >= maxx && x <= minx)
        cout << 0;
    else
        cout << min(abs(x - maxx), abs(x - minx));
}