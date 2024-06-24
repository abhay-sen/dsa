#include <bits/stdc++.h>
using namespace std;
//custom comparator : aisa comparator jo humne banaya h 
bool cmp(char first,char second){
    return first>second;
}
bool cmp2(int first,int second){
    return first>second;
}
bool cmp3(string first,string second){
    return first>second;
}
int main() {
    string s="abhay";
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    vector<int> v{2,3,1,5,4};
    sort(v.begin(),v.end(),cmp2);
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<string> str{"abhay","sen","rohit","singh","gungun"};
    sort(str.begin(),str.end(),cmp3);
    for(auto i:str){
        cout<<i<<" ";

    }
    cout<<endl;
return 0;
}