//take five elements as input and print their doubles as output

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5];
    cout<<"Enter the five elements;"<<endl;
    for (int index = 0; index < 5; index++)
    {
        cin>>arr[index];
    }
    cout<<"the double of each element is "<<endl;
    for (int index = 0; index < 5; index++)
    {
        cout<<2*arr[index]<<" ";
    }
    
    
return 0;
}