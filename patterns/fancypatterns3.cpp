#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <= 2*i; j++)
        {
            if (j==0||j==2*i)
            {
                cout<<"*";
            }
            
            else if (j<=i)
            {
                cout<<j;
            }
            else 
            {
                cout<<2*i-j;
                
            }
            
            
        }
        cout<<endl;
        
    }
    for (int i = n-1; i >0; i--)
    {
        for (int j = 2*i-1; j >0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
return 0;
}