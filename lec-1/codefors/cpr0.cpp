#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n,roll;
    cin>>n>>roll;
    string arr;
    cin>>arr;
    for(int i=0;i<roll;i++)
    {
        int a,b;
        cin>>a>>b;
        char c,d;
        cin>>c>>d;
        for(int j=0;j<=n;j++)
        if(j>=a-1 && j<=b-1)
        if(arr[j]==c)
        arr[j]=d;
    }
    cout<<arr;
}