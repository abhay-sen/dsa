#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr={2,1,4,3,7,2,5,4,1,6,8,9};
    stack<int>st;
    st.push(-1);
    int index=arr.size()-1;
    vector<int> ans(arr.size());
    for(int i=arr.size()-1;i>=0;i--){
        int curr=arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();

        st.push(curr);
    }
    
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
return 0;
}