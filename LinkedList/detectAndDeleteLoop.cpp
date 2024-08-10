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
bool detectionOfLoop(Node *head)
{
    // map<ListNode*,bool> mp;
    // ListNode* index=head;
    // while(index!=nullptr){
    //     if(mp.find(index)!=mp.end()){
    //         return true;
    //     }
    //     mp[index]=true;
    //     index=index->next;
    // }
    // return false;
    // neeche h floyed cycle detection
    if (head == nullptr)
        return false;

    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && slow != nullptr)
    {

        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (fast == slow)
            return true;
    }
    return false;
}
Node* StartPointOfLoop(Node* head){
    if(!detectionOfLoop(head)){
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && slow != nullptr)
    {

        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (fast == slow){
            slow=head;
            break;
        }
            
    }
    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;
        
    }
    return slow;
}
void RemoveLoop(Node *head)
{
    if (!detectionOfLoop(head))
    {
        return;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != nullptr && slow != nullptr)
    {

        fast = fast->next;
        if (fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (fast == slow)
        {
            slow = head;
            break;
        }
    }
    Node* prev=fast;
    while (fast != slow)
    {
        prev=fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next=NULL;
    return ;
}
int main() {
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    Node *fifth = new Node(50);

    Node *sixth = new Node(60);

    Node *seventh = new Node(70);

    Node *eighth = new Node(80);

    Node *ninth = new Node(90);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth;

    cout<<detectionOfLoop(first)<<endl;
    cout<<StartPointOfLoop(first)->data<<endl;
    RemoveLoop(first);
    cout<<detectionOfLoop(first)<<endl;
    return 0;
}