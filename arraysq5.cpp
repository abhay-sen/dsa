//minimum
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={26,54,78,91,2,1,-1,5,-919,10282};
    int size=10;
    int minNum=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<minNum)
        {
            minNum=arr[i];
        }
        
    }
    cout<<minNum;
return 0;
}