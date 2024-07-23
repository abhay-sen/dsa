/*
run time polymorphism   
    also called dynamic binding
    same thing existing in different forms
    polymorphism existing after the code has started running
    function overriding is a type of run time polymorphism
    let us suppose mere paas ek animal class h jiske andar ek function h animal and maine ek class banayi dog jo inherit hui h animal se and maine child mei jab same function jo parent se aayi h usko child ke andar define karke jab uska functionality change kardu toh jo animal se default inherit hua tha woh use nhi hoga balki jo extra banaya hu child ke andar usko use karenge that is a type of function overriding neeche do class bana rha animal aur dog dekh le thoda samjh jayega
    jabtak maine parent class mei woh function ko virtual define nhi kiya h and maine upcasting ke through ek object create kar rha hu toh har baar parent class ka hi function call hoga upcasting mei mai pointer parent type ka daalta and obj child type ka jaise Animal* A=new dog;
    upcasting kar rhe ya downcasting kar rhe without the virtual keyword humesha tumhara pointer ka function print hoga
    and jab virtual keyword use karoge toh jaisa object create kar rhe uska hi function print hoga this is a type of runtime polymorphism
    default behaviour depend on pointer type
    but virtual keyword makes it depend on object type
abstraction
    encapsulation is a subset of abstraction 
    in encapsulation we wrap datamember and member function into a class whereas in abstraction mei sirf essential information show hota hai rather than pura information
    a container containing multiple things yaha pe container mei abstractionh merko nhi pta container mei kya h but container h
    isme genralization ko show kar  rhe hote h and implementation hiding hota h 
    heap ke andar allocate karna h toh new keyword ka use karunga 
    heap mei but khud se deallocate karna padega stack se jyada memory heap pe hoti h 
    best practice hoti h toh mai heap se memory allocate karunga
how to initialize 2d array in heap
    int **arr=new int* [n] iss line se maine ek array banaya h int* type ka jiska size n h and usme kya store ho rhha usme pointer store ho rha ab agar mai for loop bana rha 
        for(int i=0;i<n;i++){
            arr[i]=new int[m]; 
        }//iss code se mai har ek array ke block me naya integer ka array banaya hu of size m
*/

#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    Animal(){
        cout<<"constructor inside animal"<<endl;
    }
    virtual void speak()
    {
        cout << "speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    Dog()
    {
        cout << "constructor inside dog" << endl;
    }
    // isme already animal wali class se speak inherit hua h but agar mai isme wapis se speak define karu toh yeh ho jayega uss function ko override karna for this class
    void speak()
    {
        cout << "barking" << endl;
    }
};
int main() {
    // Animal* a=new Animal;
    // Dog* b=new Dog;
    // b->speak();//isme dog wale class ka speak method print hua h but agar speak hota hi nhi dog mei toh bas speaking print hota as inherited
    // a->speak();
    // delete a;
    // delete b;
    // //neeche jo karunga usko bolte h upcasting
    // Animal* c=new Dog;
    // c->speak();
    // //neche down casting
    // Dog* d=(Dog*)new Animal;
    // d->speak();
    Animal* a=new Animal;
    Dog* b=new Dog;//is case mei dono cheeze call ho rhi cause idhar default behviour lag rha inheritance ka as dog is inherited from animal jisme pehle animal ka constructor call hota h then dog ka 
    Animal* c=new Dog;//isme kyuki dog type ka object ban rha heap mei jiske kaaran woh animal pe depend kar rha and usek chakkar mei animal ka bhi ban rha
    Dog *d = (Dog *)new Animal;//isme animal type ka ban rha cause object animal type ka jaa rha
    //inititalizing 2d array in loop;
    int row=5;
    int col=3;
    int** arr=new int*[5];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=0;
        }
    }
    //printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //deleting (dealocating)
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}