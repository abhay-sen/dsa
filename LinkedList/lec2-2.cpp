/*
insert and delete ka function banega idhar
circular linked list ke liye tum tail ke nedxt ko head kardo
and also head aur tail mei koi head tail nhi hota
and doubly circular ke liye bhi doubly linked list ke head ke prev ko tail karo and tail ke next ko head karo

*/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head,Node* &tail, int data)
{
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    Node* newNode=new Node(data);
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    if(head==NULL){
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    else if(position>=getLength(head)){
        insertAtTail(head,tail,data);
        return;
    }
    else{
        int i=1;
        Node* previous=head;
        while(i<position-1){
            previous=previous->next;
            i++;
        }
        Node* nextNode=previous->next;
        Node *newNode = new Node(data);
        newNode->next=nextNode;
        newNode->prev=previous;
        previous->next=newNode;
        nextNode->prev=newNode;
        return;
        

    }
}
void DeleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp ;
        return;
    }
    int len=getLength(head);
    if(position<=0|| position>len){
        cout<<"out of bounds"<<endl;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        
    }
    else if(position==len){
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        int i=1;
        Node* current=head;
        while(i<position){
            current=current->next;
            i++;
        }
        
        Node* previous=current->prev;
        Node* after=current->next;
        previous->next=after;
        after->prev=previous;
        current->next=NULL;
        current->prev=NULL;
        delete current;
    }
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;
    insertAtPosition(head,tail,1,10);
    insertAtPosition(head, tail,2, 20);
    insertAtPosition(head, tail, 3, 40);
    insertAtPosition(head, tail, 4, 50);
    insertAtPosition(head, tail, 3, 30);
    insertAtPosition(head,tail,2,69);
    print(head);cout<<endl;
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    cout<<getLength(head)<<endl;
    DeleteNode(head,tail,3);
    print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << getLength(head) << endl;
    DeleteNode(head,tail,getLength(head));
    print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << getLength(head) << endl;
    DeleteNode(head,tail,1);
    print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << getLength(head) << endl;
    return 0;
}