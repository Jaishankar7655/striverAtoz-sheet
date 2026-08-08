#include <bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > maxi)
        {
            maxi = nums[i];
            ans.push_back(nums[i]);
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<int> arr = {34, 22, 12, 3, 0, 6, 1};
    vector<int> result = leader(arr);
    for (auto i : result)
    {
        cout << i << "   ";
    }
    return 0;
}