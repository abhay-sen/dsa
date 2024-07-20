/*
task is to find the last occurence of a character in a string recursively
*/
#include <bits/stdc++.h>
using namespace std;
int solve(string& s,char& ch,int i){
    if(i<0){
        return -1;
    }
    
    if(s[i]==ch){
        return i;
    }
    int ans=solve(s,ch,i-1);
    return ans;
}
int main() {
    string s="Swetabhay";
    char ch='r';
    int i=s.size()-1;
    int occurence = solve(s, ch, i);
    

    cout<<occurence<<endl;
return 0;
}