#include<bits/stdc++.h>
using namespace std;                                        

int main()                                                  
{                                                           
    int t, n, k;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int arr[n];
        for(int j = 0; j < n; j++) 
        {
            cin >> arr[j];
        }
        
        int b = 0;
        
        for(int loop = 0; ; loop++) 
        {
            int a = 0;
            for(int m = 0; m < n; m++)
            {
                if(arr[m] >= k)
                    a++;
            }
            
            if(a == n) 
            {
                break;
            }
            
            for(int p = 0; p < n; p++) 
            {
                arr[p] += 1;
            }
            b++;
        }
        cout << b << endl;
    }
    return 0;
}
