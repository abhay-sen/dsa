/*
this question is different from the original first non repeating character in leetcode cause this question asks you to return an array providing the non repeating character in the current window
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string str="aac";
    vector<int> arr(26,0);
    queue<char> q;
    string ans="";
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        arr[ch-'a']++;
        q.push(ch);
        while(!q.empty()){
            if(arr[q.front()-'a']>1){
                q.pop();

            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    cout<<ans;
return 0;
}