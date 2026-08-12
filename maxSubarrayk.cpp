#include <bits/stdc++.h>
using namespace std;
int subArrayk(vector<int>& nums, int l)
{
  int count = 0;
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += nums[j];
      if (sum == l)
      {
        count++;
      }
    }
  }
  return count;
}

int main()
{
  vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -1};
  int l = 3;
  cout << subArrayk(arr, l) << endl;
}