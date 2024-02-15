#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 8-i; j >0; j--)
        {
            cout << "* ";
        }
        for (int k = 0; k<2*i+1; k++)
        {
            if (k%2==0)
            {
                cout<<i+1<<" ";
            }
            else
            {
                cout<<"* ";
            }
            
            
        }
        for (int j = 8 - i; j > 0; j--)
        {
            cout << "* ";
        }

        cout<<endl;
    }
    
    
return 0;
}