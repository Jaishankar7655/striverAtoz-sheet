#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    int largest = 1;
    set<int> value;
    for (int i = 0; i < n; i++)
    {
        value.insert(nums[i]);
    }
    bool loop = false;
    int count = 0;
    for (auto i : value)
    {
        // cout << i << "  ";
        if (i == i + 1)
        {
            count++;
            loop = true;
            largest = count;
        }
    }
    cout << largest;

    return count;
}
int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    longestConsecutive(arr);
    // for (auto i : arr)
    // {
    //     cout << i << "  ";
    // }
    return 0;
}