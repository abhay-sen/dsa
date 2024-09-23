/*
queue ko vector se implement karna h
*/
#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<endl;
class ImplementQueue{
        public:
        int *arr;
        int front;
        int rear;
        int size;

        ImplementQueue(int size){
            this->size=size;
            arr=new int[size];
            front=0;
            rear=0;
        }
        void push(int data){
            if(rear==size){
                out("Queue is full");
            }
            else{
                arr[rear]=data;
                rear++;
            }
        }
        void pop(){
            if(front==rear){
                out("Queue is empty");
                front=0;
                rear=0;
            }
            else{
                arr[front]=-1;
                front++;
                if(front==rear){
                    front=0;
                    rear=0;
                }
            }
        }
        int getFront(){
            if(front==rear){
                out("The queue is empty");
                return -1;
            }
            else{
                return arr[front];
            }
        }
        bool isEmpty(){
            if(front==rear){
                return true;
            }
            else return false;
        }
        int getSize(){
            return rear-front;
        }


};
int main() {
    ImplementQueue q(10);
    q.push(5);
    q.push(10);
    q.push(20);
    q.push(25);
    out(q.getFront());
    cout<<q.getSize()<<endl;
    q.pop();
    out(q.getSize());
    if(q.isEmpty()){
        out("Empty");
    }
    else{
        out("Not Empty");
    }
    out(q.getFront());
return 0;
}