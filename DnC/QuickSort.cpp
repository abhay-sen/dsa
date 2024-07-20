//interview ke liye important h and heaps and quicksort ana hi chahiye 
//simple sa h 
// lets say mere paas ek array h jisko sort karna h 
//quick sort ki algorithm bolti h ki ek ko uski sahi jagah pe pahucha do and baaki ko recursion sambhal lega 
//partition logic jisme mai ek pivot element pick karta hu and uske left mei saare element jo usse chote h woh daalta and right mei jo uysse bade h woh daalta 
//easy toh lag rah
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr, int start,int end){
    int index=start;
    int element=arr[start];
    int count=0;
    for (int i = start+1; i <=end; i++)
    {
        if(arr[i]<=element){
            count++;
        }
    }
    int rightindex=start+count;
    swap(arr[index],arr[rightindex]);
    index=rightindex;
    int i=start;
    int j=end;
    while (i<index&&j>index)
    {
        while (arr[i]<=element)
        {
            i++;
        }
        while (arr[j]>element)
        {
            j--;
        }
        if (i<index&&j>index)
        {
            swap(arr[i],arr[j]);
        }
        
        
    }
    return index;
    
}
void quickSort(vector<int>& arr,int start,int end){
    if(start>=end) return;

    //partition logic
    int p=partition(arr,start,end);
    // recursive calls
    // left
    quickSort(arr,start,p-1);

    

    //right
    quickSort(arr,p+1,end);
}
int main() {
    vector<int> arr{1,1,1,1,2,5,2,4,1,1,1,1,5,5,5,5,5,5,5,5,8,9,7,6,3};
    quickSort(arr,0,arr.size()-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
return 0;
}