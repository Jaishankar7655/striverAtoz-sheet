#include <bits/stdc++.h>
using namespace std;
int largestNumberOnces(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ nums[i];
    }

    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int result = largestNumberOnces(nums);
    cout << result;

    return 0;
}