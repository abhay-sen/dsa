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
int main() {
return 0;
}