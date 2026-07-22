#include <bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> &nums, int n)
{
    vector<int> temp;
    
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }
    int temp_size = temp.size();

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    for (int i = temp_size; i < n ; i++)
    {
        nums[i] = 0;
    }
    return nums;
}

int main()
{
    int n = 10;
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    vector<int> result = fun(nums, n);

    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}