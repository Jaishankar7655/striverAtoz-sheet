#include <bits/stdc++.h>
using namespace std;

int sortArray(vector<int> &nums)
{
    int n = nums.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    for (auto i : mpp)
    {
        if (i.second > n / 2)
        {
            return i.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {
        0,
        1,
        1,
        0,
        1,
        2,
        1,
        2,
        0,
        0,
        0,
    };
    sortArray(arr);
    for (auto i : arr)
    {
        cout << i << "  ";
    }
    return 0;
}