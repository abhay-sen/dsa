//count the number of 0s and 1s
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={0,0,1,0,1,1,1,0,0};
    int size=9;
    int countOfZero=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0) countOfZero++;
    }
    cout<<"Number of zeros are "<<countOfZero<<" and number of ones are "<<size-countOfZero;
return 0;
}