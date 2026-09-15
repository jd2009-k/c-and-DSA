#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0;i < test;i++)
    {
        long long int number;
        cin >> number;
        for (;number % 2 == 0 && number > 1;)
            number /= 2;
        if (number % 2 != 0 && number > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}