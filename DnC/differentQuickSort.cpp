#include <bits/stdc++.h>
using namespace std;
void quickSort(vector<int>& arr,int start,int end){
    if(start>=end) return;
    int pivot=end;
    int i=start-1;
    int j=start;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);

        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quickSort(arr,start,i-1);
    quickSort(arr,i+1,end);
}
int main() {
    
    vector<int> arr = {5, 35, 95, 28, 44, 88, 68, 10, 15, 37, 95, 87, 54, 86, 13, 69, 80, 99, 13, 44};
    quickSort(arr,0,arr.size()-1);
    for(auto it: arr) cout<<it<<" ";
return 0;
}
