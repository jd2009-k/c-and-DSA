#include<bits/stdc++.h>
using namespace std;
int primenumber(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
           return 1;
        }
    }
    return 0;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(k%(m*2)==0)
    cout<<k/(m*2)<<" ";
    else
    cout<<k/(m*2)+1<<" ";

    if(k%(m*2)!=0)
        if((k%(m*2))%2!=0)
            cout<<(k%(m*2))/2+1<<" ";
        else
            cout<<(k%(m*2))/2<<" ";
    else
        cout<<m<<" "; 
    if(k%2==0)
        cout<<"R";
    else
        cout<<"L";

}