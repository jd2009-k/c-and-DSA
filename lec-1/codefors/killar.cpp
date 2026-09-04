#include<bits/stdc++.h>
using namespace std;


int main()
{ 
    long long int n,x,y,c;
    double d;
    cin>>n>>x>>y;
    d=n*y/100.0;
    if(d - (long long int)(d)>0)
    c=(long long int)d +1;
    else
    c=(long long int)d;
    c=c-x;
    if(c>0)
    cout<<c;
    else
    cout<<0;

    
}