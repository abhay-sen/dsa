/*
start kiye ek example se ki mere paas teen glass pade h and usme se ek ke neeche ek gold coin rakha hua h
merko pta karna h ki kis glass ke neeche gold coin h
yeh ek specific form of recursion h jisme mai explore kar rha hota hu saare solutions and jo ek reject hogya usko wapis check nhi karta hu rat in a maze ek famous question try kar rha 
lets say ek pass word h 3 digit ka jisme mai ek ek karke track kar sakta ki kaunsa solution ho sakta and kaunsa nhi
har ek possible solution hit karne ka try kar rha and jo ek baar check kar chuka hu woh wapis check nhi karunga
this is the concept of backtracking and iska time complexity bohut bekar rehta h
yeh tab use karta hu jab koi aur optionnhi hota mai isme saare raaste jaake dekhta hu and jo answer hota h woh return hote h
pehla question h permutation of a string and ip diya h ek string and merko iske saarhe string nikalne h
*/
#include <bits/stdc++.h>
using namespace std;
void permutation(string& s,int i=0){
    //base case;
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }

    for (int j = i; j < s.length(); j++)
    {
        //swap
        swap(s[i],s[j]);
        //recursion call
        permutation(s,i+1);
        //backtracking kyuki swap  karne ke baad string change hogyi jo merko nhi chahioye isliye mai wapis se swap  kar de rha hu
        swap(s[i], s[j]);
    }
    
}
int main() {
    string str="abhay";
    permutation(str);
return 0;
}