#include <bits/stdc++.h>
using namespace std;
void solve(string&s, int i,bool &flag){
    if(i>s.size()/2){
        return;
    }
    if(s[i]!=s[s.size()-i-1]){
        flag=false;
        return;
    }
    solve(s,i+1,flag);
}
int main() {
    bool flag=true;
    string s="abhay";
    int i=0;
    solve(s,i,flag);
    cout<<flag<<endl;
return 0;
}