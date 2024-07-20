#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}
int BS(int a[],int k,int start,int end){
    if(start>end) return -1;
    int mid= start+(end-start)/2;
    if(a[mid]==k) return mid;
    else if(k>a[mid]){
        return BS(a,k,mid+1,end);
    }
    else return BS(a,k,start,mid-1);
}
int main() {
    cout<<fact(6);
return 0;
}