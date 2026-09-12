#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n,a=0,def=0,max=0,b=0,x;
        cin>>n>>x;
        for(int j=0;j<n;j++)
        {
            a=b;
            cin>>b;
            def=b-a;
            if(def>max)
            {
                max=def;
            }
        }
        if((x-b)*2>max)
        max=(x-b)*2;
        cout<<max<<endl;
    }

}