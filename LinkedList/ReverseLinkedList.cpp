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

Node *reverse(Node *prev, Node *curr)
{
    if (curr == NULL)
    {
        return prev;
    }
    Node *forward = curr->next;
    curr->next = prev;
    return reverse(curr, forward);
}

Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    return reverse(prev, curr);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtTail(head, tail, 77);

    

    print(head);

    head = reverseList(head);
    print(head);

    return 0;
}
