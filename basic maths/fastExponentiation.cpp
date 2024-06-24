#include <bits/stdc++.h>
using namespace std;
//two methods first wala agar a^b nikalna h then woh aise hoga
int normalSolution(int a,int power){
    int ans=1;
    for(int i=0;i<power;i++){
        ans*=a;
    }
    return ans;
}
int fastExponentation(int a,int power){
    int ans=1;
    while (power>0)
    {
        if(power%2!=0){
            ans=ans*a;
        }
        a=a*a;
        power>>=1;
    }
    
}
int main() {
    cout<<normalSolution(5,4)<<endl;
return 0;
}