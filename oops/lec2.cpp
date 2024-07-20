/*
4 pillars of OOPs
1)encapsulation
2)inheritance
3)polymorphism
4)abstraction 
yeh interlinked h saare 
sabse pehla encapsulation 
isme hum data function and member function ko ek bade capsule mei data ko encapsulate kardeta hu
basically jab class create karta hu toh kya karta hu
data members and member function ko ek class ke andar wrap karta hu and yeh jo class ke through wraping h iss wraping ko by default mai kya bolta hu? encapsulation
ek aur cheez h jo h perfect encapsulation iska mtlb jab saare data member ko private mark karta hu and isme data ko access karta hu with help of getters and setters iske through mai privacy and security increase kar sakta hu 
data ke upar wrapper chadhana is a type of encapsulation
advantage of encapsulation mai read only bana sakta reusable bana sakta etc
second topic h Inheritance
maan lo baap ka colour gora h and beta bhi gora h toh hum bolte h na ki beta baap pe gya h toh iska mtlb mai yeh keh sakta hu ki color maine papa se inherit kiya h
ab inheritance mei ek super/base/parent class hogi jiski properties ko inherit karta h ek sub/child/derived class
mtlb ek child class h jo parent class ki property ko inherit karta h
ab coding ke andar kaise karenge??
koi child class inherit karne ke liye mai aise likhta class child_name: "mode of inheritance" parent_class_name
chart bana rha
base class ka access modifier   Mode of Inheritance
 isme h ki base class mei kaunsa access modifier h                        Public  Protected   Private
public                    Public  Protected   Private
protected                 Protected Protected Private
private                   NA        NA          NA

yeh jo upar ek chart jaisa dikh rha h usme mai bta rha ki koi ek parent class h jisme data jo h woh public,protected,private mei h mtlb rows mei h 
and mera jo individual columns h public protected private ke woh btate ki whether mode of inheritance kaisa h public protected ya private
agar mai public data ko public mode se inherit karta hu toh child class mei bhi woh public hi banega but agar protected mode se karta toh protected and private se private 
similarly agar mai protected data ko public ke through access karunga toh access toh ho jayega but in protected form and protected ke liye protected but private mode ke liye private ho jyaega
and lastly mai private data ko toh access kar hi nhi sakta ek child class mei bhi agar karna h toh uske andar public mei getters and setters hone chahiye jinko access kar sakta
types of inheritance:
    1) single level inheritance
        isme ek parent ek child jab ek single child class inherit karta h ek single parent class se toh usko bolte h single level inheritance
    2)Multi level inheritance
        maan lo teen level h fruit mango alphanso alphanso is a mango and mango is a fruit example create kar rha neeche dekh le
    3)Multiple inheritance
        jab mai do ya jyada cheezo se inherit karta hu toh mai bolta hu multiple inheritance
        horse and donkey ka jo inheritance hota h uska jo final banega woh mule banega
    4)heirarchical inheritance
        jab ek parent se do ya usse jyaada inherit hoti h toh usko heirarchical inheritance bolte h
    5)hybrid inheritance
        yeh baaki sab ka mixture h jab sab mix ho jaye toh woh hybrid inheritance hota h
    inheritance ambiguity ko solve karta hu scope resolution ke through


Polymorphism
    ab jo exist karta h bohut saare form mei usko bolte h polymorphism
    agar maan lo do function banaunga same naam ka toh error dedega 
    toh ab mai seekh rha ki same naam ka function kaise create karta hu
do type ke polymorphism hote h
    1) complie time polymorphism
    2)runtime polymorphism
sabse pehle compile time ke andar bhi aata h function overloading and operator overloading
agar mai kisi decimal number ke last mei f likh du mtlb woh floating point number h jaise ki 5.12f
*/
#include <bits/stdc++.h>
using namespace std;
//yeh maine jo neeche class banaya hai usme dekho age weight and ek function ko ek bade class ke andar wrap kardiya h mtlb usko encapsulate kardiya h
class Animal{
    private:
        int age;
        

    public:
        int weight;
        void eat(){
            cout<<"eating"<<endl;
        }
        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age=age;
        }

};

//ab mai use kiya hu private ka mtlb saare data entity ko maine private mei daal diya h toh yeh ek type h perfect encapsulation ka and isme mai data members ko use kar rha hu with the help of getters and setters
class Dog : public Animal
{
};//ab yeh jo h animal ke saare public ke andar jo jo h usko access kar payega isme mai public mode of inheritance se animal ke properties and ffunctions ko dog inherit karta h
//multilevel inheritance
class Fruit{
    public:
    string name;
};
class Mango:public Fruit{
    public:
    int weight;
};
class Alphanso:public Mango{
    public:
    int sugarLevel;
};
//multiple inheritance;
class School{
    public:
    int maths;
};
class Coaching{
    public:
    int maths;
};
class Student:public School, public Coaching{

};

class Maths{
    public:
        int sum(int a,int b){
            return a+b;
        }
        int sum(int a,int b,int c){
            return a+b+c;
        }

        int sum(int a,float b){
            return a+b*100;
        }
};
//upar maine sum wale function ko multiple forms mei exists karwa diya jahga pe naam same h but function ke parameters mei pharak h
int main() {
    Dog *a=new Dog;
    a->weight=50;
    a->setAge(15);
    a->getAge();
    a->eat();
    //even though maine dog mei kuch daala nhi h but still dog jo h an8imal ka sab kuch access kar paa rha h and this is through the concept of inheritance;
    //multilevel Inheritance
    Alphanso b;
    cout<<b.name<<" "<<b.weight<<" "<<b.sugarLevel<<endl;
    Student c;
    //cout<<c.maths<<" "<<endl;//yeh chalega hi nhi cause maths dono mei h ab iske liye merko scope resolution use karna padega
    cout<<c.School::maths<<endl;//iska mtlb school ke andar jo maths ka dabba h woh use kar rha hu

    Maths d;
    cout<<d.sum(5,10)<<" "<<d.sum(15,15,15)<<" "<<d.sum(12,0.22f)<<endl;
return 0;
}