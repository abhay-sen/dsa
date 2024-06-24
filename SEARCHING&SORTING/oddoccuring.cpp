//find the odd occuring element in an array
//all element occur even no. of times except once
//all repeating occurence of element appears in pairs and pairs are not adjacent
//find the element that appears odd number of times
#include <bits/stdc++.h>
using namespace std;
int oddOccuring(vector<int> &arr){
    int s=0;
    int e=arr.size()-1;
    int mid= s + (e-s)/2;
    while(s<=e){
        if(s==e){
            return arr[s];
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
}
int main() {
    vector<int> arr={1,1,2,2,3,3,4,4,3,600,600,4,4};
    int odd= oddOccuring(arr);
    cout<<odd;
return 0;
}