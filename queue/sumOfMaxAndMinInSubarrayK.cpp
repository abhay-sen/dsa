#include <bits/stdc++.h>
using namespace std;
int sumOfMaxAndMinInSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq,dqMinimum;
    int ans=0;

    // first window
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }
        while (!dqMinimum.empty() && nums[i] <= nums[dqMinimum.back()])
        {
            dqMinimum.pop_back();
        }
        // inserting index as we need to check out of window
        dq.push_back(i);
        dqMinimum.push_back(i);
    }
    // store answer for first window
    ans+=nums[dq.front()]+nums[dqMinimum.front()];

    for (int i = k; i < nums.size(); i++)
    {
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }
        if (!dqMinimum.empty() && i - dqMinimum.front() >= k)
        {
            dqMinimum.pop_front();
        }
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }
        while (!dqMinimum.empty() && nums[i] <= nums[dqMinimum.back()])
        {
            dqMinimum.pop_back();
        }
        // inserting index as we need to check out of window
        dq.push_back(i);
        dqMinimum.push_back(i);
        // current window ka answer store karna h
        ans+=nums[dq.front()]+nums[dqMinimum.front()];
    }
    return ans;
}
int main() {
    vector<int> v{2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<sumOfMaxAndMinInSlidingWindow(v,k)<<endl;
return 0;
}