#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n,b=10;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        if(arr[0]!=n)
        for(int j=0;j<n;j++)
        {
            b=0;
            for(int k=1;k<n-1;k++)
            {
                if(arr[k-1]<arr[k] && arr[k]>arr[k+1])
                {
                    swap(arr[k],arr[k+1]);
                    b++;
                }
            }
            if(b==0)
            break;
        }
        else
        cout<<"NO"<<endl;
        if(arr[0]!=n)
        for(int j=0;j<n-1;j++)
        {
            b=10000;
            if(arr[j]<arr[j+1]);
            else
            {
                cout<<"NO"<<endl;
                b=0;
                break;
            }
        }
        if(b==10000)
        cout<<"YES"<<endl;
    }
}