/*
object oriented programming
ek type ka programming technique jo objects ke around revolve hoti h
what is an object: it is an entity jiske paas 2 cheeze hoti h 1st state/properties and 2nd behaviours/method
lets say mere paas ek object h dog uska state ho jayega usek paas char pair h but uske behaviour ho jayega woh bark karta h
it increases readability
it increases reusability

isme ek aur concept hota h classes ka 
lets say merko ek custom data type banana h jiska naam h raam and mai bol deta hu ki uske aandar teen cheeze aati h ek integer ek boolean aur ek string mai define kar rha hu ek naya data type jo yeh teen cheeze store kare
user defined data type ke liye mai use karta hu classes ka upar wala jo custom data type h that is called classes
jo design ya blue print hota h usko bolte h class and jo actual entity hoti h usko bolte h object 
mai bol rha hu ki isme yeh cheeze honi chahiye mtlb woh class and agar usme woh cheeze h toh woh object
object is a instance of a class 
study what is padding and greedy element
agar mai kisi object ki property ko use karunga toh merko dot operator use karna padega
c++ mei total 3 access modifier hota h jo access ka scope define karte h 
teen type ke hote h
public,private and protected
agar koi state ya behaviour public h mtlb usko mai class ke andar bhi access kar sakta hu and class ke bahar bhi access kar sakta hu
but private ko mai sirf class ke andar hi access kar paa rha hu
syntax hota h class name{
};
class ke andar jo state aur properties hoti h unko mai data members bolta hu and jo class ke andar functions hota h usko mai member functions bolta hu 
agar merko outside class data member ko access karna h toh neeche example dekh samjhega agar outside class use karna h toh mai getter and setter ka use karta hu jo usko get aur set karta h
merepass system mei do type ki memory hoti h
sabse pehli stack memory jo ki bohut kam hoti h and dusri hoti h heap memory jo ki bohut jyada hoti h
heap se memory allocate karne ko dynamic memory allocation karna h
agar mai new int karke kuch likhta hu iska mtlb yeh ki maine ek naya integer create kiya h heap mei se and jo new int ke left side h usme mera address store hua h mtlb new int jo h woh memory location deta h
woh hota h as int* a=new int;
and isme jo address h woh heap memory mei pada h
humne bola int* ptr= new int[5] toh ab ek stack memory h and ek heap memory h upar wale concept se maine ek 5 size ka array banaya h heap ke andar and uske andarka maan lo first address h h104 jisko merko pointer mei store karna h and woh pointer stack mei pada h iska matlb mai stack mei sirf memory location store kar rha means mai stack mei sirf pointer store kar rha jo ki point kar rhi h heap ke andar ki memory ko
int* a=new int;
ka mtlb a jo h woh stack mei h and integer mei jo h woh heap mei h
ek cheez dhyan rakhna stack ke andar ka space auto clean ho sakta h but jo heap ke andar ka space hota h usko mai auto clean nhi kar sakta usko clean karne ke liye merko delete keyword ka use karna padeha
usko mannually clean karna padega.
ek aur concept h memory leak jisko padhna padega and also garbage collector
maan lo mai ek naya ptr banayta int* a=new int;
ab isko delete karne ke liye merko likhna padega delete a
maan lo mere paas ek class h xyz karke and usme ek state h called as weight and then mai uske andar ek function bana rha as
void func(int weight){
weight =weight};toh ab isme mai kaise differentaite karunga
toh usko differentiate karne ke liye mai use karta hu this keyword ka
jo class ke andar ka specific weight h usko mai lkh sakta this-> weight=weight  iska matlb hota h ki current object ak weight = something
yaha pe this ka mtlb hota h a pointer to current object mtlb abhi tak mai class se object to banaya nhi hu toh mai kaise uski states ka use karunga uske member functions ke andar uske liye mai use karta hu this keyword jo ki abhi jo object use kar rha hu usme access karta h
this->weight ka mtlb current object ki weight wali property
object creation
    uske andar sabse pehle ek constructor aata h and constructor ka jo kaam hota h woh woh  hota h kisi object ko initialize karna ek constructor ke bohut types hote h uska koi return type nhi hota
    naam jo hai woh same as class hota h and aiska kaam initialize karna hota h object ko
    jab bhi koi object create karta hu toh jo constructor h woh apne aap hi call ho jata h
    constructor by default bhi banta h and alag se bana bhi sakta hu and constructor banane ke liye mera syntax hota h name_of_class(){
    } bas ban gya constructor
    koi bhi naya object jab create hota h toh constructor auto call ho jata h
    jab mai likhta hu
    animal a=b;
    isme copy constructor call hua h and waha pe pass by value hua h toh mai dubara copy constructor call karunga and phir wapis se ek copy create hogi mtlb ek aur copy constructor call hoga isse bachne ke liye mai copies nhi create karne deta toh mai kya karta hu mai by reference pass karta hu
    by default shallow copy hota h but usse bachne ke liye and deep copy karne ke liye mai copy constructor ka use karta hu
    deep vs shallow copy seekhayega 
    const keyword ke baare padhle
    static keyword ke baare padhlo
    initialization list ke baare mei padh lo
    ab constructor padh liye toh ab destructor padh lo
    agar static create kiye object then destructor auto create ho jaata h
    but dynamically merko mannually call karna padta h
    uska syntax hota h

    ~name_of_class(){
    }
*/
#include <bits/stdc++.h>
using namespace std;
    class Animal {
        // state
        private:
        int weight;
        public:
        
        int age;
        string type;
        //default Constructor
        Animal(){
            this->weight=0;
            this->age=0;
            this->type="";
            //above three lines are for creation
            cout<<"constructor called"<<endl;
        }
        //parameterized Constructor
        Animal(int age){
            this->age=age;
            cout<<"parameterized constructor called"<<endl;
        }
        Animal(int age,int weight){
            this->age=age;
            this->weight=weight;
            cout<<"parameterized constructor 2 called"<<endl;
        }
        Animal(int age,int weight,string type){
            this->age=age;
            this->weight=weight;
            this->type=type;
            cout<<"parameterized constructor 3 called"<<endl;
        }
        //copy constructor
        Animal(Animal&obj){
            this->age=obj.age;
            this->type=obj.type;
            this->weight=obj.weight;
            cout<<"im instide copy constructor"<<endl;
        }
        //behaviour
        void eat(){
            cout<<"eatingh"<<endl;
        }
        void sleep(){
            cout<<"sleepinhg"<<endl;
        }
        //neeche ke dono function kyuki inside classs h isliye jo private object h usko access kar paa rhe and hum bhi iske through jo private object h usko access kar pa rha
        void getWeight(){
            cout<<weight<<endl;
        }
        void setWeight(int w){
            weight=w;
        }
        //destructor
        ~Animal(){
            cout<<"I am destructor"<<endl;
        }
    };
int main() {
    //object creation

    //static
    Animal ramesh;
    ramesh.type="lino";
    ramesh.age=69;
    cout<<"age of ramesh is "<<ramesh.age<<endl;//isme error dega kyuki age ya name jo h woh private h
    cout<<"name of ramesh is "<<ramesh.type<<endl;
    ramesh.eat();
    ramesh.sleep();
    ramesh.setWeight(69);
    ramesh.getWeight();
    // upar wala pura static tha ab dynamic memory allocation use karungha
    // dynamic
    Animal * suresh= new Animal;
    //yaha pe suresh ek address h
    //and uss address ko access karne ke liye merko *suresh ke jaisa likhna padega
    (*suresh).age=45;
    (*suresh).type="cat";
    //upar wale format mei likhne se accha h tum aise likh lo
    suresh->age=7;
    suresh->type="dog";
    suresh->eat();
    suresh->sleep();
    cout<<suresh->type<<endl;
    //upar merko agar suresh ka kuch access karna h toh mai -> ka use karta hu
    //neeche mai teen object create kar rha hu just to check ki parameterized constructors kaise kaam karte h
    //constructor is a good coding practice 
    Animal a(10);
    Animal b(10,12);
    Animal c(10,12,"cat");
    Animal e=a;
    Animal d(b);
    //destructor baaki saare objects ke liye create ho rha h bas suresh ko chodh ke kyuki suresh jo h woh dynamically create hua h toh usko destroy karne ke liye khud se create karna padega as 
    delete suresh;//manually
    //static ke case mei jab scope khtm ho jayega toh destructor auto delete ho jaata h
return 0;
}