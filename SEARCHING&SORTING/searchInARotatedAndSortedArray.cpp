#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[start]<arr[end]) return start;
        if(start==end) return start;
        if(arr[mid]>arr[mid+1]) return mid+1;
        if(arr[mid-1]>arr[mid]) return mid;
        if(arr[mid]>arr[end]) {
            start=mid;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}
int findTarget(vector<int>& arr,int target){
    int k=findMin(arr);
    int start=0;
    int end=arr.size()-1;
    if(target<=arr[end]&&target>=arr[k]){
        start=k;
    }
    if(target>=arr[start]&&target<=arr[k-1]){
        end=k-1;
    }
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = { 4,5,6,7,0,1,2 };
    int target = 6;
    int a =findTarget(arr,target);
    cout<<a<<endl;
    return 0;
}