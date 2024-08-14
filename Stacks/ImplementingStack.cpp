//mereko kisi bhi stack mei merko mainly 5 operations karne padte h sabse pehle
/*
push
pop
top
size
empty
mai jo h ek stack ko kisi array se bhi implement karke dekh sakta hu ya kisi linked list se bhi implement karke d3kh sakta hu
mai array se try karta hu
kisi bhi class ka ek properties hoti h ya behaviours hote h 
mere paas do opetion h ek static aur ek dynamic toh kisi bhi array ko mai implement kar rha and mere paas dynamic ka operation h toh mai wahi use karunga
sabse pehle agar dynamically array ko implement karna h toh merko usko merko by pointer reference karna padega and uska size bhi dena padega
third merko uska top access karna h toh merko ek top ke liye index bhi rakhna padega jo merko top of stack bta rha
*/
#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
        //properties
        int *arr;
        int top;
        int size;
        //constructor
        Stack(int size){
            arr=new int[size];
            this->size=size;
            top=-1;
        }
        //functions
        void push(int data){
            if(top<size-1){
                top++;
                arr[top] = data;
            }
            else{
                cout<<"Stack overFlow"<<endl;
            }
        }
        void pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                arr[top] = 0;
                top--;
            }
            
        }
        int getTop(){
            if(top==-1) cout<<"stack is empty"<<endl;

            else return arr[top];
            return -1;
        }
        int getSize(){
            return top+1;
        }
        bool isEmpty(){
            if(top!=-1) return false;
            else return true; 
        }
};
int main() {
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.getSize()<<endl;

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<s.getSize()<<endl;
return 0;
}