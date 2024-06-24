#include <bits/stdc++.h>
using namespace std;
#define out(x) cout<<x<<endl;
void solve(int arr[]){
    cout<<"size inside solve function "<<sizeof(arr)<<endl;
}
int main() {
    int arr[10] = {1,2,3,4};
    out("size inside main function" << sizeof(arr));
    solve(arr);
return 0;
}