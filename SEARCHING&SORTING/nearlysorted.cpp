#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int target){
    int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if (arr[mid+1] == target && mid+1<arr.size())
        {
            return mid+1;
        }
        if (arr[mid-1] == target&&mid-1>=0)
        {
            return mid-1;
        }
        if(arr[mid]<target){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid = s + (e - s) / 2;
    }
    }
int main() {
    vector<int> arr{10,3,40,20,50,80,70};
    int target=70;
    int ans=binarySearch(arr,target);
    cout<<"index of"<<target<<"is"<< ans<<endl;
return 0;
}