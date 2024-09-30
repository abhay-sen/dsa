//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to reverse first k elements of a queue.

    void reverseQueue(queue<int> &q)
    {
        if (q.size() == 0)
            return;
        int top = q.front();
        q.pop();
        reverseQueue(q);
        q.push(top);
    }
    queue<int> modifyQueue(queue<int> q, int k)
    {
        // add code here.
        reverseQueue(q);
        int n = q.size() - k;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            st.push(q.front());
            q.pop();
        }
        for (int i = 0; i < n; i++)
        {
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0)
        {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty())
        {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends