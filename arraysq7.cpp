//reverse karna h array ko
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={5,6,7,8,4,1,2,3};
    int size=8;
    int start=0;
    int end=size-1;
    while (start<end) 
    {
        if (start!=end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
        start++;
        end--;
    }
    int i=0;
    while(i<size){
        cout<<arr[i]<<" ";
        i++;
    }
return 0;
}