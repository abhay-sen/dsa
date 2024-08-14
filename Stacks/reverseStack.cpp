#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int &data)
{
    // base case
    if (st.size() == 0)
    {
        st.push(data);
        return;
    }
    // ek case
    int temp = st.top();
    st.pop();
    // recursive call
    insertAtBottom(st, data);
    // backTracking
    st.push(temp);
}
void reverseStack(stack<int>& st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,temp);
    
}
int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}