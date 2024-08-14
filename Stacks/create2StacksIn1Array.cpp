/*
merko abhi ek array se jo h 2 stacks implement karna h jiske liye mai soch rha ki do tops use karu

*/

#include <bits/stdc++.h>
using namespace std;
class Stack{
    public: 
        int *arr;
        int size;
        int top1;
        int top2;

        Stack(int size){
            arr=new int[size];
            this->size=size;
            top1=-1;
            top2=size;
        }

        void push1(int data){
            if(top2-top1==1){
                //space not available
                cout<<"Stack1 overflow"<<endl;
            }
            else{
                top1++;
                arr[top1]=data;
            }
        }
        void push2(int data){
            if (top2 - top1 == 1)
            {
                // space not available
                cout << "Stack2 overflow" << endl;
            }
            else
            {
                top2--;
                arr[top2] = data;
            }
        }
        void pop1(){
            if(top1==-1){
                //empty stack
                cout<<"Under flow in stack 1"<<endl;
            }
            else{
                //not empty
                top1--;
            }
        }
        void pop2(){
            if(top2==size){
                cout<<"Under flow in stack 2"<<endl;
            }
            else{
                top2++;
            }
        }
        
};
int main() {
return 0;
}