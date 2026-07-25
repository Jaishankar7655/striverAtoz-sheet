#include <bits/stdc++.h>
using namespace std;

// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[nums[i]]++;
//     }
//     for (auto i : mpp)
//     {
//         if (i.second > n / 2)
//         {
//             return i.first;
//         }
//     }
//     return -1;
// }

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int el;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            el = nums[i];
            count = 1;
        }
        else if (el == nums[i])
        {
            count++;
        }
        else
            count--;
    }
}
int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int ans = majorityElement(arr);
    cout << ans;
    return 0;
}