#include <bits/stdc++.h>
using namespace std;

int small_Number(int smallest, int size, int nums[])
{
    for (int i = 0; i <= size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    return smallest;
}
int main()
{

    int smallest = INT_MAX;
    int size = 6;
    int nums[size] = {1, -23, 12, 34, -23, -100};
    smallest = small_Number(smallest, size, nums);
    cout << smallest;

    return 0;
}