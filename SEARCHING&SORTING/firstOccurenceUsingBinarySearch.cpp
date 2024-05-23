#include <bits/stdc++.h>
using namespace std;
int firstOccurence_usingBinarySearch(vector<int> arr,int target){
    int storage=-1;
    int start=0;
    int end=arr.size()-1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==target){
            storage=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+ (end-start)/2;
    }
    return storage;
    
}
int main() {
    vector<int> arr = {1,3,4,4,4,4,4,6,7,9};
    int target = 4;
    cout<<"working"<<endl;
    int index = firstOccurence_usingBinarySearch(arr, target);
    cout<<index;
    return 0;
}