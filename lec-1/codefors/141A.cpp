#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest, host, charecter;
    cin >> guest >> host >> charecter;
    guest += host;
    sort(guest.begin(), guest.end());
    sort(charecter.begin(), charecter.end());
    if (guest == charecter)
        cout << "YES";
    else
        cout << "NO";
}