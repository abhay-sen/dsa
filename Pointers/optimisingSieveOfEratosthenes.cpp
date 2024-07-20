#include <bits/stdc++.h>
using namespace std;
vector<bool> Sieve(int n){
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    
    for(int i=2;i*i<=n;i++){//optimisation 2 jisme mai root n tak run kar rha cause uske aage wala toh loop mei ghusega hi nhi
        if(sieve[i]==true){
            // int j=i*2;
            int j=i*i;//optimization 1 kyuki iske pehle wala sab toh marked hi hona h cause iske pehle waale baakio ke table mei aayenge
            while (j<=n)
            {
                sieve[j]=false;
                j+=i;
            }
            
        }
    }
    return sieve;
}
vector<bool> segmentedSieve(int l,int r){
    //get me the prime array that would be used to mark segment
    vector<bool> sieve=Sieve(sqrt(r));
    vector<int> basePrimes;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }
    vector<bool> segment(r-l+1,true);
    if(l==1){
        segment[0]==false;
    }
    for(auto prime:basePrimes){
        int first_mul=(l/prime)*prime;
        if(first_mul<l){
            first_mul+=prime;
        }
        int j= max(first_mul,prime*prime);
        while(j<=r){
            segment[j-l]=false;
            j+=prime;
        }

    }
    return segment;
}

int main() {
    // vector<bool> sieve=Sieve(50);
    // for(int i=0;i<=50;i++){
    //     if (sieve[i])   
    //     {
    //         cout<<i<<endl;
    //     }
        
    // }
    vector<bool>ss=segmentedSieve(110,130);
    for(int i=0;i<ss.size();i++){
        if(ss[i]){
            cout<<i+110<<" ";
        }
    }
return 0;
}