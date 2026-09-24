#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<string>v(a);
    for (int i = 0;i < a;i++)
        cin >> v[i];
    for (int i = 0;i < a;i++)
        for (int j = 0;j < b;j++)
        {
            if (v[i][j] == 'S')
            {
                if ((i - 1) >= 0 && v[i - 1][j] != 'S')
                    if (v[i - 1][j] != 'W')
                        v[i - 1][j] = 'D';
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                if (i + 1 < a && v[i + 1][j] != 'S')
                    if (v[i + 1][j] != 'W')
                        v[i + 1][j] = 'D';
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                if (j - 1 >= 0 && v[i][j - 1] != 'S')
                    if (v[i][j - 1] != 'W')
                        v[i][j - 1] = 'D';
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                if (j + 1 < b && v[i][j + 1] != 'S')
                    if (v[i][j + 1] != 'W')
                        v[i][j + 1] = 'D';
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
            }
        }
    cout << "YES" << endl;
    for (int i = 0;i < a;i++)
        cout << v[i] << endl;
}
