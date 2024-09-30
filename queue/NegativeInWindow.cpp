//{ Driver Code Starts

// Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.
//neeche wala solution maine khud khoja h with time complexity of O(n*k) and space complexity of O(k)
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

long long checkNegative(queue<long long> &q)
{
    while (!q.empty())
    {
        if (q.front() < 0)
            return q.front();
        else
            q.pop();
    }
    return 0;
}
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    queue<long long> q;
    for (long long i = 0; i < K; i++)
    {
        q.push(A[i]);
    }
    vector<long long> sol;
    sol.push_back(checkNegative(q));
    for (long long i = K; i < N; i++)
    {
        if (q.size() == K)
        {
            q.pop();
        }
        q.push(A[i]);
        sol.push_back(checkNegative(q));
    }
    return sol;
}