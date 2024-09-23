#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(vector<int>& arr){
    stack<int> st;
    
    st.push(-1);
    int index = arr.size() - 1;
    vector<int> ans(arr.size());
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top()!=-1&&arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();

        st.push(i);
    }
    return ans;
}
vector<int> prevSmaller(vector<int> &arr)
{
    stack<int> st;
    st.push(-1);
    int index = arr.size() - 1;
    vector<int> ans(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        while (st.top()!=-1&&arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();

        st.push(i);
    }
    return ans;
}
int getRectangularArea(vector<int> &arr){
    //step 1 prevsmall output
    vector<int> prev=prevSmaller(arr);
    vector<int> next=nextSmaller(arr);
    int size=arr.size();
    int maxArea = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int length=arr[i];
        if(next[i]==-1){
            next[i]=size;
        }
        int width=next[i]-prev[i]-1;
        int area=length*width;
        maxArea= max (maxArea,area);
    }
    return maxArea;
}
int main() {
    vector<int> v= {2,1,5,6,2,3};
    cout<<getRectangularArea(v);
    
return 0;
}