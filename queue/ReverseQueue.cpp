#include <bits/stdc++.h>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void reverseQueue(queue<int>&q){
    if(!q.empty()){
        int a=q.front();
        q.pop();
        reverseQueue(q);
        q.push(a);
    }
    else {
        return;
    }
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    print(q);
    
    // below is approach one stack wala method time complexity O(n) space complexity O(n)
    // stack<int> st;
    // while(!q.empty()){
    //     st.push(q.front());
    //     q.pop();
    // }
    // while(!st.empty()){
    //     q.push(st.top());
    //     st.pop();
    // }
    // print(q);


    //Recursion wala method
    reverseQueue(q);
    print(q);
    return 0;
}