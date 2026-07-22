#include <bits/stdc++.h>
using namespace std;
vector<int> sum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<pair<int, int>> arr;

    for (int i = 0; i < nums.size(); i++)
    {
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = arr[i].first + arr[j].first;
        if (sum == target)
        {
            return {arr[i].second, arr[j].second};
        }
        else if (sum < target)
            i++;
        else
            j--;
    }
}

int main()
{
    int target = 14;
    vector<int> arr = {2, 6, 5, 8, 11};
    vector<int> ans = sum(arr, target);
    for (auto x : ans)
    {
        cout << x << "   ";
    }
    return 0;
}
