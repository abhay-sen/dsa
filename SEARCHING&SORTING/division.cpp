#include <bits/stdc++.h>
using namespace std;
int divide(int divisor,int dividend){
    int start=0;
    int end=dividend;
    int mid= start+ (end-start)/2;
    int ans=0;
    while(start<=end){
        if(mid*divisor>dividend){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main() {
    int divisor=2;
    int dividend=100;
    int quotient = divide(divisor,dividend);
    cout<<quotient;
return 0;
}