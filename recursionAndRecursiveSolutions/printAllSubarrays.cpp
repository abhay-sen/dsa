#include <bits/stdc++.h>
using namespace std;

void solveOne(vector<int>& arr,int start,int end){
    //base
    if(end==arr.size()){
        return;
    }
    
    //1 case
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    solveOne(arr,start,end+1);
}
void solve(vector<int>&arr){
    for(int start=0;start<arr.size();start++){
        int end=start;
        solveOne(arr,start,end);
    }
}
int main() {
    vector<int> arr{1,2,3,4,5,6,7};
    int i=0;
    int j=0;
    solve(arr);
return 0;
}