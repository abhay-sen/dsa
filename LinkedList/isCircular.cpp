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
bool isCircular(Node* &head){
    Node* temp=head;
    Node* ptr=head->next;
    while(ptr!=nullptr&&ptr!=temp){
        ptr=ptr->next;
    }
    if(ptr==nullptr) return false;
    else return true;
}
int main() {
    Node* head=new Node(10);
    Node* tail=head;
    insertAtTail(head,tail,20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    tail->next=head;
    isCircular(head) ? cout<<"true"<<endl: cout<<"false"<<endl;
return 0;
}