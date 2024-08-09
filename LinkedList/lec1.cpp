/*
based on non continous memory allocations 
it is a linear data structure needing non continous space
link list ki ek dabbe ko mai node bolta hu
idhar wastage of memory nhi hota
array mei insert karne ke liye O(n) time lagta hu but linked list mei usse kam time mei insert kar sakte h
runtime pe hi mai node insert kar sakta and runtime pe hi node delete kar sakte iske andar yeh dynamically grow and shrink dono ache se hoti h
linked list is basically a collection of node
ek dabbe ko mai node bol sakta
simplest node looks like ek dabbe ke do division jisme ek part mei data and dusre part mei next location ka address 
mtlb ek part hoga mera data and next part hoga ek pointer jo next node ki taraf point karta h pointer to node ko node* likh sakte h
class Node{
    int data;
    Node* next;
}
yeh sabse simple linked list ka type h iska naam h singly linked list
types hota h  singly linked list 
            circular linked list
            Doubly linked list
            Circular Doubly linked list
sab samjh aajayega
jo step soch rhe unhi steps ko sirf likhna h aur kuch nhi karna h

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
void print(Node* &head){
    //print kardo data
    //pointer ko aage le jaao
    //jab pointer null ho jaye

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main() {
    Node* first=new Node(69);
    Node *second = new Node();
    Node *third = new Node(69);
    Node *fourth = new Node();
    Node *fifth= new Node(96);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    //upar jo maine kiya h usse ek link list create hui h jisme jo pointers ka naam h woh first second ... karke hai and first jo h woh second ko point kar rha second jo h woh third ko and third jo h woh fourth ko andforuth jo h fifth ko point kar rha
    //yaha pe meri link list create ho gyi h
    cout<<"printing ll"<<endl;
    print(first);//hisab se print ho na chahiye data
    return 0;
}