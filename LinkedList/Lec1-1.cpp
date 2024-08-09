/*
linked list jo h merko usko create karna seekhna h ab
*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//the below function is used to insert a new node before the current head that is add a new element to the top
void insertAtHead(Node* &head,Node* &tail,int data){
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step 1 create new node
    Node* newNode=new Node(data);
    //step 2 set the next of new node to current head;
    newNode->next=head;
    
    head=newNode;
}
void print(Node *head)
{
    // print kardo data
    // pointer ko aage le jaao
    // jab pointer null ho jaye

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if(tail==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //step 1 create node
    Node* newNode=new Node(data);
    //step 2 connect with tail

        
    
    
        tail->next=newNode;
    
    

    //update kardo tail ko
    
    tail=newNode;
}
int length(Node* &head){
    int count=1;
    Node* counting=head;
    while(counting->next!=NULL){
        count++;
        counting=counting->next;
    }
    return count;
}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    //step find the position
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=length(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    int i=1;
    Node* prev = head;
    while (i<position){
        prev=prev->next;
        i++;

    }
    //create a node;
    Node* newNode=new Node(data);
    //naya node ka next ko aage wale node se set karna h
    newNode->next=prev->next;
    //previous ko connect karna h current wale se
    prev->next=newNode;
}

void deleteNode(int position,Node* &head,Node* &tail){
    if(position>length(head)){
        cout<<"list is smaller "<<endl;
        return;
    }
    if(head==NULL){
        cout<<"cannot delete empty"<<endl;
        return;
    }
    if(position == 1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int len= length(head);
    if(position==len){
        //find prev
        int i=1;
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        prev->next=NULL;

        Node* temp=tail;
        tail=prev;
        delete temp;
        return;
    }
    else{
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        Node* current=prev->next;
        prev->next=current->next;
        Node* temp=current;
        delete temp;
        return;
    }
}
int main() {
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 30);
    
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtTail(head,tail,77);
    
    
    print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << length(head) << endl;
    deleteNode(1,head,tail);
    print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << length(head) << endl;
    deleteNode(3,head,tail);
    print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << length(head) << endl;
    deleteNode(4, head, tail);
        print(head);
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << length(head) << endl;
    return 0;
}