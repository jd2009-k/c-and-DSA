#include <bits/stdc++.h>
using namespace std;
void marag(vector<int>& v1, vector<int>& v2, vector<int>& sum)
{
    int i = 0, j = 0, k = 0;
    for (;i < v1.size() && j < v2.size();)
    {
        if (v1[i] <= v2[j])
        {
            sum[k++] = v1[i++];
        }
        else
        {
            sum[k++] = v2[j++];
        }
    }
    if (i == v1.size())
    {
        for (j;j < v2.size();j++)
            sum[k++] = v2[j];
    }
    else
        for (i;i < v1.size();i++)
            sum[k++] = v1[i];
}
void maragsorat(vector<int>& v)
{
    int n = v.size();
    if (n <= 1)return;
    vector<int>v1(n / 2), v2(n - n / 2);
    for (int i = 0;i < v1.size();i++)
        v1[i] = v[i];
    for (int i = 0;i < v2.size();i++)
        v2[i] = v[n / 2 + i];
    maragsorat(v1);
    maragsorat(v2);
    marag(v1, v2, v);
}
int main()
{
    int n, m;
    cin >> n;
    vector<int>v(n), sum(n);
    for (int i = 0;i < n;i++)
        cin >> v[i];
    maragsorat(v);
    for (int i = 0;i < n;i++)
        cout << v[i] << " ";

}