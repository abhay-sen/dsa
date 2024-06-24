#include <bits/stdc++.h>
using namespace std;
int bs(vector<int>& arr,int low,int high,int target){
    int start = low;
    int end = high;
    
    // int mid=(start+end)/2; issue of integer overflow as adding can result in a larger number
    int mid = start + (end-start) / 2; // here we are substracting hence can easily accomodate for the integer overflow.
    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (element > target) // search in the left array
        {
            end = mid - 1;
        }
        else
        { // search in the right array
            start = mid + 1;
        }
        mid = start + (end-start) / 2;
    }
    return -1; // not found
}
int exponentialSearch(vector<int>& arr, int key){
    if(arr[0]==key) return 0;
    int i=1;
    int n=arr.size()-1;
    while(i<arr.size()&&arr[i]<=key){
        i *=2;
    }
    
    return bs(arr,i/2,min(i,n-1),key);
}
int main() {
    vector<int> arr = {3,4,5,6,11,13,14,15,56,70};
    int key=56;
    int ans = exponentialSearch(arr,key);
    cout<<"ans is at index"<<ans<<endl;
return 0;
}