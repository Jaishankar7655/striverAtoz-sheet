#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    map<int, int> maped;

    for (int i = 0; i < n; i++)
    {
        maped[nums[i]]++;
    }
    for (auto i : maped)
    {
        cout << i.first << "  " << i.second << endl;
    }
}
int main()
{
    vector<int> arr = {7, 3, 7, 2, 3, 7};
    longestConsecutive(arr);
    return 0;
}