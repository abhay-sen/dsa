#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a,b;
    cout<<"enter the size of first array ";
    int n;
    cin>>n;
    cout<<"enter the size of second array ";
    int k;
    cin>>k;
    cout<<"enter the first array "<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout << "enter the second array " << endl;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < k; i++)
    {
        bool duplicate;
        for (int j = 0; j < n; j++)
        {
            if(b[i]==a[j]) {
                duplicate=true;
                break;
            }
            else duplicate=false;
        }
        if (!duplicate)
        {
            ans.push_back(b[i]);
        }
        
        
    }
    
    for (int i = 0; i < ans.size(); i++)
    
    {
        cout<<ans[i]<<" ";
    }
    
return 0;
}