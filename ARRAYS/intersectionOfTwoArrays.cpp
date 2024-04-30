#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4,6,8};
    int arrtwo[] = {3,4, 9,10,8};
    vector<int> ans;
    for (int i = 0; i <6; i++)
    {
        for (int j = 0; j< 5; j++)
        {
            if(arr[i]==arrtwo[j]){
                ans.push_back(arr[i]);
                break;
            }
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    

return 0;
}