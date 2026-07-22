#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k)
{
    int n = nums.size();
    k = k % n;

    int start = 0;
    int end = n - 1;

    // Reverse the entire array
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }

    // Reverse first k elements
    start = 0;
    end = k - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }

    // Reverse remaining elements
    start = k;
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
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated Array: ";
    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}