#include <bits/stdc++.h>
using namespace std;
bool num[100000]={false};
int main()
{
    int n,b=0,c=0;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++)
    {
    cin>>arr[i];
    }
    for(int i=0;i<2*n;i++)
    {
        if(num[arr[i]]==true)
        b--;
        else
        {
        b++;
        if(b>c)
        c=b;
        }
        num[arr[i]]=true;
    }
    cout<<c;
}

