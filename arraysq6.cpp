//agar array h 12345678 print karna h 18273645
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    for (int i = 0; i < size/2+size%2; i++)
    {
        if(i==size/2){
            cout << arr[i]  << " ";
        }
        else
        {
            cout << arr[i] << " " << arr[size - i - 1] << " ";
        }
        
    }
    
return 0;
}