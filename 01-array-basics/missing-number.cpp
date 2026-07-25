#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
  int n = nums.size();
  int sum = n * (n + 1) / 2;
  int actualSum = 0;
  for (int i = 0; i <n; i++)
  {
   actualSum += nums[i];
  }
  return sum - actualSum;



  // int xor1 = 0;
  // int xor2 = 0;
  // for (int i = 0; i <= n; i++)
  // {
  //   xor1 = xor1 ^ i;
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   xor2 = xor2 ^ nums[i];
  // }
  // return xor1 ^ xor2;
}


int main()
{
  vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7,  9, 10};
  int result = missingNumber(arr);
  cout << "The missing number is: " << result << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}