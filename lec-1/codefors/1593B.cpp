#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        string s;
        cin >> s;
        int a = 0, maxa, arr[2] = { -100,-100 };
        for (int j = s.size() - 1;j >= 0;j--)
        {
            if (a == 0 && s[j] == '5')
                a++;
            else if (a == 1 && (s[j] == '2' || s[j] == '7'))
            {
                arr[0] = j;
                break;
            }
        }
        a = 0;
        for (int j = s.size() - 1;j >= 0;j--)
        {
            if (a == 0 && s[j] == '0')
                a++;
            else if (a == 1 && (s[j] == '0' || s[j] == '5'))
            {
                arr[1] = j;
                break;
            }
        }
        maxa = max(arr[0], arr[1]);
        cout << s.size() - maxa - 2 << endl;
    }
}