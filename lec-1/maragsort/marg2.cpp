#include <bits/stdc++.h>
using namespace std;
int co = 0;
void marag(vector<int>& v1, vector<int>& v2)
{
    if (v1[0] > v2[0])
        co++;
}
void maragsort(vector<int>& v)
{
    if (v.size() == 1)return;
    int n = v.size();
    vector<int>v1(n / 2), v2(n - n / 2);
    for (int i = 0;i < n / 2;i++)
        v1[i] = v[i];
    for (int i = 0;i < n - n / 2;i++)
        v2[i] = v[n / 2 + i];
    maragsort(v1);
    maragsort(v2);
    marag(v1, v2);
}
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0;i < n;i++)
        cin >> v[i];
    maragsort(v);
    cout << co;

    return 0;
}