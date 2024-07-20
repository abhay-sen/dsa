//immplementing merge sort using recursion and divide and conqure algorithm
//maan lo mere paas ek array h 7 3 2 16 24 4 11 9
// and merko usko sort karna h 
//approach rahegi divide and conquer toh sabse pehle isko divide kardo in two arrays jisko recursion call lagao ki woh dono half ko sort karega and phir last mei dono ko divide kardo 
//sort karne se pehle merko seekhna padega merging two sorted arrays
//space complexity and time complexity nikalna padega try karo without extra space that is without the extra left array and right array
//and ek question banana jaruri h jo ki h inversion count
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr,int start,int end){
    int mid=start+(end-start)/2;
    vector<int> leftArray(mid-start+1);
    vector<int> rightArray(end-mid);
    int t=start;
    for (int i = 0; i < mid-start+1; i++)
    {
        leftArray[i]=arr[t];
        t++;
    }
    t=mid+1;
    for (int i = 0; i < end-mid; i++)
    {
        rightArray[i]=arr[t];
        t++;
    }
    
    int i=0;
    int j=0;
    int k=start;
    while (i<leftArray.size()&&j<rightArray.size())
    {
        if(leftArray[i]<=rightArray[j]){
            arr[k]=leftArray[i];
            k++;
            i++;
        }
        else{
            arr[k]=rightArray[j];
            k++;
            j++;
        }
    }
    while (i<leftArray.size())
    {
        arr[k]=leftArray[i];
        k++;
        i++;
    }
    while (j<rightArray.size())
    {
        arr[k]=rightArray[j];
        k++;
        j++;
    }
    
    
    
}
void mergeSort(vector<int>& arr,int start,int end){
    if(start>=end) return;
    
    int mid = start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    //now merge sorted array;
    merge(arr,start,end);
}
int main() {
    vector<int> arr{1,2,3,5,7,64,23,31,543,2,35,7,10,692,2,2,2,2,0};
    mergeSort(arr,0,arr.size()-1);
    for (auto it: arr)
    {
        cout<<it<<" ";
    }
    
return 0;
}