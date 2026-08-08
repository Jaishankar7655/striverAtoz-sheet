#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    for (auto i : mpp)
    {
        if (i.second > 1)
        {
            ans.push_back(i.first);
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 2, 3};
    vector <int> result = findDuplicates(arr);
    for (auto i : result)
    {
        cout << i<<" ";
    }

    return 0;
}