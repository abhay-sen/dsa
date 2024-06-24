//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    template <class T>
    static void input(vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

// } Driver Code Ends

class Solution
{
public:
    bool binarySearch(const vector<int> &arr, int left, int right, int target)
    {
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target)
            {
                return true;
            }
            if (arr[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return false;
    }

    // Function to find if there exists a pair with given absolute difference
    int findPair(int n, int x, vector<int> &arr)
    {
        

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; ++i)
        {

            if (binarySearch(arr, i + 1, n - 1, arr[i] + x))
            {
                return 1;
            }

            if (binarySearch(arr, i + 1, n - 1, arr[i] - x))
            {
                return 1;
            }
        }

        // If no such pair is found
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);
        

        Solution obj;
        int res = obj.findPair(n, x, arr);
        
        cout << res << endl;
    }
}

// } Driver Code Ends