#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    vector<int>v;
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        v.push_back(v1[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=INT_MAX;
        int m;
        for(int j=0;j<n;j++)
        {
            if(v[j]!=INT_MAX)
            if(c>v[j])
            {
                c=v[j];
                m=j;
            }
        }
        v[m]=INT_MAX;
        v1[m]=i;
    }
    for(int i : v1)
    {
        cout<<i<<" ";
    }
    cout<<"Tirth";

}