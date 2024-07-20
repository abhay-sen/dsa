/*
1)input mei ek array diya hua h distinct integers ka and isme n elements h and ek target diya h and merko target banana h and merko btana h minimum number of elements required to find target sum(coin change problem jaisa h) isme saare elements ke upar call maar ke dekhna padta ki lag rha ya nhi
2)cut into segments ek integer diya h n jo ki ek rod ki length bta rha and isme maximum number of segment banane h such that segment of legment is either x,y,z
3) maximum sun of non-adjacent elements
*/
#include <bits/stdc++.h>
using namespace std;
int breakSegments(int n,int x,int y,int z){
    //base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int ans1= breakSegments(n-x,x,y,z)+1;
    int ans2 = breakSegments(n - z, x, y, z)+1;
    int ans3 = breakSegments(n - z, x, y, z)+1;
    return max(ans1,max(ans2,ans3));
}
void sumMax(vector<int>& arr, int sum, int &maxi,int i){
    if(i>=arr.size()){
        maxi = max(sum,maxi);
        return;
    }
    //include
    sumMax(arr,sum+arr[i],maxi,i+2);
    //exclude
    sumMax(arr,sum,maxi,i+1);
}
int targetFind(vector<int>&arr, int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=targetFind(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}
int main() {
    vector<int> arr{1,2};
    int target=6;
    int ans=targetFind(arr,target);
    int n=7;
    int x=2,y=2,z=2;
    int solution= breakSegments(n,x,y,z)<0 ? 0 : breakSegments(n,x,y,z);
    vector<int> forsum{2,1,4,9};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    sumMax(forsum, sum, maxi, i);
    cout<< maxi << endl;
    cout<<solution<<endl;
    cout<<ans<<endl;
return 0;
}