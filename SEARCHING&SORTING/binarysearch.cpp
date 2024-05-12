// the array should be always sorted and if it is not sorted then the binary search can not  be applied
//it mainly contains start and the end variables 
// in the first part we initialize the start with index 0 and the end with the last index 
//in the second step we initialize the mid with (start+end)/2
//then we check if mid is equal to target or not if not then we check whether mid is greater or smaller then we decide whether to search in the left array or right array : example if mid is 9 and target 15 we need to find it in right array as 9 is less than 15 we then continously shift the end or start to the position of mid and checking the mid again
//example code
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int start=0;
    int end = size-1;
    int mid=(start+end)/2;
    while(start<=end){
        int element =arr[mid];
        if (element==target){
            return mid;
        }
        else if (element>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = (start+end)/2;
        
    }
    return -1;
}
int main() {
    int arr[]={2,4,6,8,10,12,16};
    int size = 7;
    int target=8;
    int indexOfTarget= binarySearch(arr,size,target);
    if (indexOfTarget==-1){
        cout<<"Target not found"<<endl;
    }
    else
    {
        cout<<"target found at "<< indexOfTarget<<endl;
    }
    
return 0;
}