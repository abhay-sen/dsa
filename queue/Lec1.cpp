/*
data structure in order of first in first out.
follows fifo ordering
ek front hota h ek rear hota h 
insertion humesha rear se hota h and deletion humesha front se hota h
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(15);
    q.push(90);
    cout<<"size "<<q.size()<<endl;
    q.pop();
    cout<<"Size after one pop "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Q is empty"<<endl;
    }
    else{
        cout<<"Q is not empty"<<endl;
    }
    cout<<"front is "<<q.front()<<endl;
    cout<<"rear is "<<q.back()<<endl;
return 0;
}