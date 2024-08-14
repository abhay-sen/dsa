#include <bits/stdc++.h>
using namespace std;
void printMiddle(stack<int>& st,int &totalSize){
    if(st.size()==0){
        cout << "No element in stack";
        return;
    } 
    //base Case
    if(st.size()==totalSize/2+1){
        cout<<st.top()<<endl;
        return;
    }
    //handle one case
    int temp=st.top();
    st.pop();
    //recursive call
    printMiddle(st,totalSize);
    //backtrack
    st.push(temp);
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    int n=st.size();
    printMiddle(st,n);
    cout<<st.top()<<endl;
    return 0;
}