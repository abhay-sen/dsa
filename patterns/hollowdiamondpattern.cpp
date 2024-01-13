#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {   
        
            for (int j = 1; j < n-i; j++)
            {
                cout<<" ";
                
            }
            for (int k = 0; k <= 2*i; k++)
            {
            if (k==0||k==2*i)
            {
                
                cout<<"*";
                
            }
            else
            {
                cout<<" ";
            }
            
            }
            
            
            cout<<endl;
    }
    for (int row = 0; row < n; row++)
    {
        //spaces
        for (int spaces = 0; spaces < row; spaces++)
        {
            cout<<" ";
        }
        //stars
        for (int k = 0; k <=2*(n-row-1); k++)
            {
            if (k==0||k==(2*(n-row-1)))
            {
                
                cout<<"*";
                
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