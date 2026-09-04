#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n,a,b,c=1;
    cin>>n;
    a=sqrt(n);
    while (n%a!=0)
    {
        a--;
    }
    cout<<a<<" "<<n/a;

}
