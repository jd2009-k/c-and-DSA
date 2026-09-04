#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    bool tag=0;
    long long int lo=1,hi=n,mid;
    for(;hi>=lo;)
    {
        mid=(hi+lo)/2;
        if((mid*(mid+1))/2==n)
        {
            break;
        }
        if((mid*(mid+1))/2<n)lo=mid+1;
        if((mid*(mid+1))/2>n)hi=mid-1;
    }
    cout<<mid<<endl;
}