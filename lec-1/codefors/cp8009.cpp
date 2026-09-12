#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n,k,b;
        cin>>n>>k;
        for(int j=0;j<n;j++)
        {
            cin>>b;
            if(b==k)
            k=-1;
        }
        if(k==-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
