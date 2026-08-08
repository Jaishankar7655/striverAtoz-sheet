#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<int> ans;
    int expected = 1;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans.push_back(nums[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] < expected)
        {
            continue;
        }
        else if (ans[i] == expected)
        {
            expected++;
        }
        else
        {
            return expected;
        }
    }
    return expected;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int result = firstMissingPositive(arr);
    cout << result;
    return 0;
}