// pointers kyuki confusing h isliye isko replace karne ke liye laaya gaya h reference variable
// reference variable matlb ek hi memory location ka dusra naam
//maan lo a ko initialize kiya 5 se and usko ek aur naam de sakte h let a=5 then int& b=a ka mtlb b jo h same address ko refer kar rha h as a
// pass by value mei copy banti h pass by reference mei direct bheja jata h

#include <bits/stdc++.h>
using namespace std;
void sum(int& num){
    num++;
}
int main() {
    int a=10;
    int& b=a;
    a++;
    cout<<a<<endl;
    cout<<b<<endl;
    sum(a);
    cout << a << endl;
    cout << b << endl;
    return 0;
}