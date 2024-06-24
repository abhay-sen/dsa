//int arr[10] isse 10 dabbe bane integer type ke amd har dabbe ka naam hota h arr[i] jaha pe i<10 h aur agar merko arr[0] ka address chahite toh yaha pe arr[0] jo h woh dabbe ka naam h toh iska address &arr[0] ho jayega
//kisi bhi array ka jo base address h woh teen tareeke se nikaltra h sabse pehle sirf agar naam likh du toh ya &arr ya &arr[0] se
//arr[i] ko mai do tareeke se likh sakta ya mai bol sakta ki arr[i] ka mtlb hota h *(arr+1) same goes for i[arr] iska matlb bhi wahi hota h and yeh valid h isme internal or hota h 
// array ke name ke upar size lagaya h toh total space taken by the array but agar uska address kahi aur store kar rha and uss pointer ka size nikal rha tab woh uss pointer ka szize h
// arr is a constant pointer and you cant change that

#include <bits/stdc++.h>
using namespace std;
#define out(x) cout << x << endl;
int main() {
    // int arr[4]={23,14,234,453};
    // int* p=arr;
    // out(arr);
    // out(arr[0]);
    // out(&arr);
    // out(&arr[0]);
    // out(p);
    // out(&p);
    // out(*arr);
    // out(*(arr+1));
    // out(*(arr+2));
    // out(*(arr + 3));
    // int i=0;
    // out(arr[i]);
    // out(i[arr]);
    // out(*(arr+i));
    // out(sizeof(arr));//pure array ka size dega
    // out(sizeof(p));//sirf pointer ko jitna space lagta utna space dega
    // jab character array ka use karta hu toh usme agar mai koi pointer initialize karta hu say c and jo point kar rha h towards a character array called ch the jab mai *c print karta hu toh cout usko interpret karta h as*(c+0) which inturn is c[0] ab iska mtlb yeh ki jo *c h woh single character de rha
    // and similarly agar mai c ko direct print karta hu usme bhi address hona chahhiye but usme address nhi hota usme direct jo char string h woh print ho jati h
    // int arr[10];
    // char ch[10]="abhay";
    // char* c=ch;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;
    // out(&c);
    // out(*c);
    // out(c);
    char name[10]="SherBano";
    char* c= &name[0];
    out(name);
    out(&name);
    out(*(name+3));
    out(c);
    out(&c);
    out(*(c+3));
    out(c+2);
    out(*c);
    out(c+3);//isme jo third index h usse leke saari jo last tak characters the woh print ho gye
    return 0;
}