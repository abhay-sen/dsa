/*
agar queue ke last mei space nhgi h toh wapis start pe aajao
*/
#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<endl;
class CircularQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }
    void push(int data){
        //queue full
        if((front==0&&rear==size-1)||(rear==front-1&&(front!=-1||front!=0))){
            cout<<"q is full cannot insert "<<endl;
        }
        //single element case -> first element
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }
        // circular queue
        else if(rear==size-1&&front!=0){
            rear=0;
            arr[rear]=data;
        }
        // normal
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop(){
        //empty check;
        if(front==-1){
            out("Queue is empty");
        }
        //single element;
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        //circular nature;
        else if(front==size-1){
            arr[front]=-1;
            front=0;
        }
        //normal flow
        else{
            arr[front]=-1;
            front++;
        }
    }
};
int main() {
return 0;
}