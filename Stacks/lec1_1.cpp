/*
stack is a data structure in which data structure is stored in the form of LIFO order which means last in first out 
ek shadi mei plates hoti h jisme jo sabse upar wali plate hi li jayegi na generally toh un plates ko bolte h stack 
jo last mei add hui usko sabse pehle pick kiya hu
stack mei insertion operation ko push karna bolte h mtlb insert kar rha toh merko push(value) karna padega
ab iske baad aata h pop operation jo sabse upar wala element check karta h 
ek aur operation hota h s.top jo stack ka top btata h ki woh kya h
ab uske baad aata h s.empty ab isme mai check karta hu ki woh stack khali h ya nhi
s.size se mai number of elements check karta hu

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    //creation of stack
    stack<int> st;//yaha se stack create hogya h woh type integer
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //remove
    st.pop();

    //check element on the top
    cout<<"The top most element of the stack st is "<<st.top()<<endl;
    cout<<"the number of elements inthe stack st is "<<st.size()<<endl;;

    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}