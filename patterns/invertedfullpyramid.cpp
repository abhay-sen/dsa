#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    for (int row = 0; row < a; row++)
    {
        //spaces
        for (int spaces = 0; spaces < row; spaces++)
        {
            cout<<" ";
        }
        //stars
        for (int stars = 0; stars < a-row; stars++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
return 0;
}