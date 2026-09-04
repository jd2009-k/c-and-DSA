#include<bits/stdc++.h>
using namespace std;
char uper(char a)
{
    if(a>='a')
    a=a-'a'+'A';
    return a;
}
char lower(char a)
{
    if(a<'a')
    a=a+'a'-'A';
    return a;

}
int nfac(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    a=a*i;
    return a;

}
int n_c_r(int n,int r)
{

    return (nfac(n)/nfac(n-r))/nfac(r);
}                                      
int main()                                                  
{
    string a;
    int sum=0;
    cin>>a;
    int b=a.size();
    for(int i=0;i<b;i++)
    {
        if(a[i]>='a')
        {
        a[i]=uper(a[i]);
        sum=sum+a[i];
        }
        else
        {
        a[i]=lower(a[i]);
        sum=sum-a[i];
        }
    }
    if(sum<0)
    cout<<-sum;
    else
    cout<<sum;
}