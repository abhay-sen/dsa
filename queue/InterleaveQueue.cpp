//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> rearrangeQueue(queue<int> &q)
    {
        vector<int> arrFirst;
        vector<int> arrSecond;
        int n = q.size();
        for (int i = 0; i < n / 2; i++)
        {
            arrFirst.push_back(q.front());
            q.pop();
        }
        for (int i = 0; i < n / 2; i++)
        {
            arrSecond.push_back(q.front());
            q.pop();
        }
        vector<int> sol;
        for (int i = 0; i < n / 2; i++)
        {
            sol.push_back(arrFirst[i]);
            sol.push_back(arrSecond[i]);
        }
        return sol;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans = ob.rearrangeQueue(q);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends