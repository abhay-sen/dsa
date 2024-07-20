/*
abhi climbing stairs wala problem sirf recursion use karke solve kiya hu usme koi time optimization nhi hua h isliye tle diya hu
yeh exponential time complexity h toh abhi iska tle hi ayega isko optimize karna padega
alag alag type ke questions ko solve karna ka try kar rha h with the help of
*/
#include <bits/stdc++.h>
using namespace std;
void findKey(string s,char key,bool& flag,int index,int n){
    if(index>=n||flag==true) return;
    if(s[index]==key) flag=true;
    findKey(s,key,flag,index+1,n);
    
}
void printDigits(int n){
    if(n==0) return;
    int ni = n / 10;
    printDigits(ni);
    cout<<n%10<<endl;
    
    
}
int main() {
    // string s="AbhaySweta";
    // char ch='a';
    // bool flag=false;
    // int index=0;
    // int n=s.size();
    // findKey(s,ch,flag,index,n);
    // cout<<flag<<endl;
    int k=6574;
    printDigits(k);
return 0;
}