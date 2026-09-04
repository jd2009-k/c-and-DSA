#include<bits/stdc++.h>
using namespace std;


int main()
{ 
    int test;
    cin>>test;
    for(int c=0;c<test;c++)
    {
        int n,k,b=0;
        cin>>n>>k;
        string arr,brr;
        cin>>arr;
        brr=arr;
        for(int i=0;i<n;i++)
        {
            int a=0;
            if(arr[i]!='#')
            for(int j=i;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    if(i!=j) 
                    arr[j]='#';
                    a++;
                }
            }
            if(a%2!=0 && a!=0)
            {
                b++;
            }
        }
        int min_d= max(0,b - 1);

        if(k>=min_d && k<=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}
