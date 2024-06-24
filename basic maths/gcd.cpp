//gcd(a,b)= gcd(a-b,b) a>b
//gcd(a,b)=gcd(b-a,a) a<b
//gcd(a,b)=gcd(a%b,b) a>b
#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)//code for gcd;
{
    // code here
    while (a != 0 || b != 0)
    {
        if (b > a)
        {
            b = b - a;
        }
        else if (a > b)
        {
            a = a - b;
        }
        else
            return b;
    }
}
int lcm(int a,int b){
    return (a*b)/(GCD(a,b));
}
int main() {
    int a=4;
    int b=12;
    cout<<"GCD: "<<GCD(a,b)<<endl;
    cout<<"LCM : "<<lcm(a,b)<<endl;
return 0;
}