#include <bits/stdc++.h>
using namespace std;
void Subarray(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Subarray(arr);
}
