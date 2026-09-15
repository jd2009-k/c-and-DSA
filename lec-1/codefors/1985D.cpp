#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        int row, col, numberOfH = 0, j = 0;
        string s, s1;
        cin >> row >> col;
        for (j;j < row;j++)
        {
            cin >> s;
            int temp = 0;
            for (int k = 0;k < col;k++)
            {
                if (s[k] == '#')
                    temp++;
            }
            if (temp < numberOfH)
            {
                for (int k = j + 1;k < row;k++)
                    cin >> s;
                break;
            }
            else
                numberOfH = temp;
            s1 = s;
        }
        int k = 0, temp = 0;
        for (k;k < col;k++)
        {
            if (s1[k] == '#')
                temp++;
            if (temp == numberOfH / 2 + 1)
                break;
        }
        cout << j << " " << k + 1 << endl;
    }


}