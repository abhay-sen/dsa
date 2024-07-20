#include <bits/stdc++.h>
using namespace std;
void solve(string& s, int i){
    if(i>s.size()/2){
        return;
    }
    swap(s[i], s[s.size() - i - 1]);
    solve(s,i+1);
    
}
int main() {
    string s="swetabhay";
    string output="";
    int index=0;
    solve(s,index);
    cout<<s<<endl;
return 0;
}