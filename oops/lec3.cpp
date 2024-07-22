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
    Dog *d = (Dog *)new Animal;//isme animal type ka ban rha
    return 0;
}