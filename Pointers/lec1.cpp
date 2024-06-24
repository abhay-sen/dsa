// memory mei agar kuch bhi store hua h toh woh kisi ek address pe store hua h 
// maan lo tumne ek variable banaya a=5;
// ab yeh jo variable h isko accsess kisse kar rhe a se but a kya h a toh naam h kya computer sirf naam se kuch access kar sakta h naah toh uske liye chahiye usko uska address 
// computer mei ek data structure hota h jisko bolte symbol table jiske andar mapping store hoti h kisi variable ki naam ki wrt its address 
// koi bhi data create hota h toh mai usko sirf sddress se hi pukar sakta hu 
// toh jo symbol table hota h woh variable ke naam corresponding to its address ek mapping store karta h
// yeh automatic memory mei manage hota h by operating system
// jab koi bhi variable create kart ahu toh pehle uski symbol table mei ek entry banti h jisme kisi address ko woh naam allot hota h jisko ek address milta h jaha pe value store hoti h
// kisi ka bhi address find karne ko ek operator hota h called address found operator
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=5;
    int b=5;

    cout<<a<<endl;// a ki value print hui
    cout<<&a<<endl;//a ka address btayegi
    cout<<&b<<endl;// bhale a and b mei same data saved h but  address alag rehta h
    //mai khud memory location select nhi kar sakta
    //int ke andar integer type ka data store hota h 
    //int* ptr=data; ka mtlb hota h ptr is a pointer to integer data
    //koi data agar kahi pe rakha h toh uska jo address h woh pointer store karta h
    // int a=5;
    //int* p = &a;
    //int jo h woh data type h
    //* jo h usko abhi ke liye samjh le ki woh syntax h but aage padhenge ki usko dereference operator bolte h p jo h woh ek variable ka naam h
    // & jo h woh address of operator h mtlb woh jo h a ka address nikal ke deta h
    //a jo h woh variable h
    // int* p ka mtlb p is a pointer to integer data
    int type=5;
    int* ptr=&type;
    cout<<ptr<<endl;//printing the value of ptr
    cout<<*ptr<<endl;//yaha pe de reference operator * ka use karke mai jo value stored h uss address pe usko print kar rha
    cout<<sizeof(ptr)<<endl; 
    int k=10;
    int*ptr01=&k;
    int* ptr02=ptr01;//yaha pe jo ptr01 h woh copy ho rha h ptr02 mei
    //kyuki mai ek ptr ko initialize kar rha hu dusre ptr se
    cout<<*ptr02<<endl;


    int aar=12;
    int* pay=&aar;
    int *q=pay;
    int*r =q;
    cout<<aar<<endl;//a ka value print hoga
    cout << &aar << endl;//a ka address
    cout << pay << endl;//pay pe jo a ka address stored h woh print hoga
    cout << &pay << endl;//pay ka address
    cout << *pay << endl;//pay jis variable ko refer kar rha uske data ko print karega
    cout << q << endl;//same a ka address stored h woh print hoga
    cout << &q << endl;//q jiss address block mei h woh address print hoga
    cout << *q << endl;//q jis variable ko refer kar rha mtlb a ka jo data h woh print hoga
    cout << r << endl;//same a ka jo address stored h woh print hoga
    cout << &r << endl;//r ka jo address h woh
    cout << *r << endl;//a ka jo data h woh
    cout << (*pay+*q+*r) << endl;//32
    cout << (*pay)*2 + (*r)*3 << endl;//60
    cout << (*pay)/2-(*q)/2 << endl;//0


    return 0;
}