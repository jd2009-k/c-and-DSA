#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        if((n-1)%3==0 || (n+1)%3==0)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
}