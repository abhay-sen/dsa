#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {2, 1, 4, 3, 7, 2, 5, 4, 1, 6, 8, 9};
    stack<int> st;
    st.push(-1);
    int index = arr.size() - 1;
    vector<int> ans(arr.size());
    for (int i=0;i<arr.size();i++)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();

        st.push(curr);
    }

    for (int i = 0; i <arr.size(); i++)
    {
        cout << ans[i] << " ";
    }
return 0;
}