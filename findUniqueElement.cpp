#include <bits/stdc++.h>
using namespace std;
int findUnique(vector<int> arr){
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}
int main() {
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements "<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];    
        
    }
    cout<<"the unique element is "<<findUnique(arr);
return 0;
}
//simple sa logic tha phaltu pana kar rha tha simply use xor operator jo same elements ko zero kardega aur sirf wahi element chodhega jo single hai.