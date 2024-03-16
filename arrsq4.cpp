//max number
#include <bits/stdc++.h>
using namespace std;
int main() {
    int maxNum= INT_MIN;
    int arr[]={2,4,1,6,512,9,0};
    int size=7;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>maxNum){
            maxNum=arr[i];
        }
    }
    cout<<maxNum;
return 0;
}