#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n,k,p;
    bool a=0;
    cin>>n>>k;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='G')
        p=i;
    }
    for(int i=p;i<n;i+=k)
    {
        if(arr[i]=='T')
        {
            a=1;
            break;
        }
        else if(arr[i]=='#')
        break;
    }
    if(a==0)
    for(int i=p;i>=0;i-=k)
    {
        if(arr[i]=='T')
        {
            a=1;
            break;
        }
        else if(arr[i]=='#')
        break;
    }
    if(a==0)
    cout<<"NO";
    else
    cout<<"YES";
    

}