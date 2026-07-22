#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }

    start = 0;
    end = k - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }

    start = 0;
    end = n - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> nums = {-1, -100, 3, 99};
    int k = 2;
    rotate(nums, k);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i]<<" ";
    }

    return 0;
}
