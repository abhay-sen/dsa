/* use of DEQUE from stl*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_back(19);
    dq.push_front(9);
    dq.push_back(18);
    dq.push_front(8);
    cout<<"Size"<<dq.size()<<endl;
    dq.pop_front();
    cout << "Size" << dq.size() << endl;
    dq.pop_back();
    cout << "Size" << dq.size() << endl;
    cout<<"front"<<dq.front()<<endl;
    cout<<"BAck"<<dq.back()<<endl;
    return 0;
}