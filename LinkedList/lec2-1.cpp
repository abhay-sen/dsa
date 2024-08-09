/*
mainly doubly linked list ke baare mei padhenge isme ek node mei teen section hote h 
ek pointer jo previous node ko poimt karta ek jo next node ko point karta and ek jo data store karta isme teen cheeze hoti h
data
node* prev
node* next

*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;

    }
    return len;
}


int main() {
    
    Node* first=new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;
    print(first);
    return 0;
}