#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int a, b, x1, y1, x2, y2, cot = 0;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        vector<pair<long long int, long long int>>v1(8), v2(8);
        v1[0] = { x1 - a,y1 - b };
        v1[1] = { x1 + a,y1 + b };
        v1[2] = { x1 - a,y1 + b };
        v1[3] = { x1 + a,y1 - b };
        v1[4] = { x1 - b,y1 - a };
        v1[5] = { x1 + b,y1 + a };
        v1[6] = { x1 - b,y1 + a };
        v1[7] = { x1 + b,y1 - a };
        v2[0] = { x2 - a,y2 - b };
        v2[1] = { x2 + a,y2 + b };
        v2[2] = { x2 - a,y2 + b };
        v2[3] = { x2 + a,y2 - b };
        v2[4] = { x2 - b,y2 - a };
        v2[5] = { x2 + b,y2 + a };
        v2[6] = { x2 - b,y2 + a };
        v2[7] = { x2 + b,y2 - a };
        for (int j = 0;j < 8;j++)
        {
            for (int k = 0;k < 8;k++)
            {
                if (v1[j] == v2[k])
                    cot++;
            }
        }
        if (a == 0 && b == 0)
            cout << 0 << "\n";
        else if (a == b)
            cout << cot / 4 << "\n";
        else
            cout << cot << "\n";


    }
}