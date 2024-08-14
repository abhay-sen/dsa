#include <bits/stdc++.h>
using namespace std;
void insertAtPosition(stack<int> &st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    if(st.top()>=data){
        st.push(data);
        return;
    }

    int temp=st.top();
    st.pop();
    insertAtPosition(st,data);
    st.push(temp);
}
void sortStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }

    int topE=st.top();
    st.pop();
    sortStack(st);
    insertAtPosition(st,topE);
}
int main() {
    stack<int> st;
    st.push(54);
    st.push(5);
    st.push(1);
    st.push(123);
    st.push(5342);
    st.push(3432);
    sortStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}