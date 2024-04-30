#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={-1,-2,3,12,4,324,11,-21,-42,-421,23,-22,2};
    int n=13;
    int start=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0){
            swap(arr[i],arr[start]);
            start++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}