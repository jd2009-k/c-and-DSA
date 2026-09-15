#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int numbers, sum = 0, odd = 0, min_Odd_Number = INT64_MAX;
    cin >> numbers;
    for (int i = 0;i < numbers;i++)
    {
        int number;
        cin >> number;
        sum = sum + number;
        if (number % 2 != 0)
        {
            odd++;
            if (min_Odd_Number > number)
                min_Odd_Number = number;
        }
    }
    if (odd % 2 != 0)
        sum -= min_Odd_Number;
    cout << sum << endl;
}