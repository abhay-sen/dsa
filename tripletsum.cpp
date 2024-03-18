#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr={10,20,30,40};
    int sum=80;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            for (int k = i+2; k < arr.size(); k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                    return 0;
                }
            }
            
        }
        
    }
    
return 0;
}