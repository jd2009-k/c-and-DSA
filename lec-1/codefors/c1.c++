#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int k = 0; k <= 1; k++)
    {
        int con, row, b = 1, c, d = 1;
        ;
        cin >> con;
        c = b = con / 2 + 1;
        for (int i = 1; i <= con; i++)
        {
            d = 1;
            for (int j = 1; j <= con; j++)
                if (j > c && j < b)
                {
                    cout << " ";
                    if (j >= c && j < con / 2 + 1)
                        d++;
                    else if (j <= b && j >= con / 2 + 1)
                        d--;
                }
                else
                    cout << j;
            cout << endl;
            if (i < con / 2 + 1)
            {
                b++;
                c--;
            }
            else
            {
                b--;
                c++;
            }
        }
    }
}