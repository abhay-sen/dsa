/*
input mei array h and check karna h if array is sorted in acsending or not
1)input mei array di h and merko btana h ki output array sorted h ya nhi
2)binary search
3)sabse important subsequences of a string yeh solve hone wala h include exclude principle se ek ko include kar ek ko exclude kar jaise
*/
#include <bits/stdc++.h>
using namespace std;
void printSubsequences(string s,string output,int i){
    if(i>=s.length()){
        cout<<output<<endl;
        return;
    }
    printSubsequences(s,output,i+1);//exclude ka call
    output.push_back(s[i]);//concatinating for include 
    printSubsequences(s,output,i+1);//include ka call
}
bool checkArray(vector<int>& array,int index,int& n){
    //base case
    if(index==n-1){
        return true;
    }
    if(array[index+1]<array[index]){
        return false;
    }
    return checkArray(array,index+1,n);
}
int binarySearch(vector<int> arr,int s,int e,int key){
    if(s>e) return -1;//base case
    int mid=(s+e)/2;//
    if(arr[mid]==key) return mid;
    if(arr[mid]<key) return binarySearch(arr,mid+1,e,key);
    else return binarySearch(arr,s,mid-1,key); 
}
int main() {
    vector<int> arr{1,2,3,4,5};
    int n=5;
    int index=1;
    cout<<checkArray(arr,n,index)<<endl;
    cout<<binarySearch(arr,0,4,5);
    string str="abcde";
    string output="";
    int i=0;
    printSubsequences(str,output,i);
    
return 0;
}