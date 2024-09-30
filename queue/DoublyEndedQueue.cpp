/*
also called Deque(dek) not to confuse with dequeue(which is poping)
char cheeze hoti h
push rear
push front
pop rear
pop front
doubly ended queue circularly bhi implement kar sakte and simple bhi jab circular hota toh woh additional ho jata h
*/
#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<endl;
class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void pushRear(int data){
        // queue full
        if ((front == 0 && rear == size - 1) )
        {
            cout << "q is full cannot insert " << endl;

        }
        // single element case -> first element
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        // circular queue
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        // normal
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pushFront(int data){
        if ((rear=(front-1)%(size-1)) )
        {
            cout << "q is full cannot insert " << endl;
        }
        // single element case -> first element
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        // circular queue
        else if (front==0 && rear != size-1)
        {
            front = size-1;
            arr[front] = data;
        }
        // normal
        else
        {
            front--;
            arr[front] = data;
        }
    }
    void popFront(){
        // empty check;
        if (front == -1)
        {
            out("Queue is empty");
        }
        // single element;
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular nature;
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        // normal flow
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popRear(){
        // empty check;
        if (front == -1)
        {
            out("Queue is empty");
        }
        // single element;
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular nature;
        else if (rear==0)
        {
            arr[rear] = -1;
            rear = size-1;
        }
        // normal flow
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
};
int main() {
return 0;
}