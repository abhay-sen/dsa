#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node() : data(0), next(NULL) {}
    Node(int data) : data(data), next(NULL) {}
};

// The below function is used to insert a new node before the current head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int length(Node *head)
{
    int count = 0;
    Node *counting = head;
    while (counting != NULL)
    {
        count++;
        counting = counting->next;
    }
    return count;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = length(head);
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    Node *prev = head;
    for (int i = 1; i < position; i++)
    {
        prev = prev->next;
    }
    Node *newNode = new Node(data);
    newNode->next = prev->next;
    prev->next = newNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position <= 0 || position > length(head))
    {
        cout << "Position out of bounds" << endl;
        return;
    }
    if (head == NULL)
    {
        cout << "Cannot delete from an empty list" << endl;
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
            tail = NULL; // List became empty
        delete temp;
        return;
    }
    int len = length(head);
    Node *prev = head;
    for (int i = 1; i < position - 1; i++)
    {
        prev = prev->next;
    }
    Node *current = prev->next;
    if (current == tail)
    {
        tail = prev;
        prev->next = NULL;
    }
    else
    {
        prev->next = current->next;
    }
    delete current;
}
void sortColorsCounting(Node*&head){
    int zeroes=0;
    int ones=0;
    int twos=0;
    Node* temp=head;
    while(temp!=nullptr){
        temp->data==0?zeroes++:temp->data==1?ones++:twos++;
        temp=temp->next;
    }
    temp=head;
    while(zeroes!=0){
        temp->data=0;
        temp=temp->next;
        zeroes--;
    }
    while(ones!=0){
        temp->data=1;
        temp=temp->next;
        ones--;
    }
    while(twos!=0){
        temp->data=2;
        temp=temp->next;
        twos--;
    }
}
Node* sortColors(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    if(head->next==nullptr){
        return head;
    }
    //dummy nodes;
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;

    Node *oneHead = new Node(-1);
    Node* oneTail=oneHead;
    Node *twoHead = new Node(-1);
    Node* twoTail=twoHead;
    Node* curr=head;
    //traversing original linked list
    while(curr!=nullptr){
        if(curr->data==0){
            //removing zero node
            Node* temp=curr;
            curr=curr->next;
            temp->next=nullptr;
            zeroTail->next=temp;
            zeroTail=temp;
        }
        else if(curr->data==1){
            Node *temp = curr;
            curr = curr->next;
            temp->next = nullptr;
            oneTail->next = temp;
            oneTail = temp;
        }
        else{
            Node *temp = curr;
            curr = curr->next;
            temp->next = nullptr;
            twoTail->next = temp;
            twoTail = temp;
        }
    }
    //teeno ready
    
    Node *temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;


    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;

    if(oneHead!=nullptr){
        zeroTail->next=oneHead;
        if(twoHead!=nullptr){
            oneTail->next=twoHead;
        }
    }
    else{
        if(twoHead!=nullptr){
            zeroTail->next=twoHead;
        }
    }
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=nullptr;
    delete temp;

    return zeroHead;
}
int main() {
    Node* head=nullptr;
    Node *tail = nullptr;
    insertAtTail(head, tail, 2);
    insertAtTail(head,tail,2);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail,2);
    insertAtTail(head, tail, 2);
    
    print(head);
    cout<<endl;
    sortColorsCounting(head);
    print(head);
    cout << endl;
    sortColors(head);
    print(head);
    cout << endl;
    return 0;
}