#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {   
        
            for (int j = 0; j < n-i; j++)
            {
                cout<<" ";
                
            }
            for (int k = 0; k <= 2*i; k++)
            {
            if (k==0||k==2*i)
            {
                
                if (i==n-1 && k==0)
                {
                    for (int m = 0; m <=2*i; m++)
                    {
                        cout<<"*";
                    }
                    
                }
                else if (i==n-1 && k==2*i)
                {
                    
                    
                }
                else
                {
                    cout<<"*";
                }
                
            }
            else
            {
                cout<<" ";
            }
            
            }
            
            
            cout<<endl;
    }
return 0;
}