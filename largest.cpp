#include <bits/stdc++.h>
using namespace std;
int largest_Number(int largest, int size, int nums[])
{
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    return largest;
}

int main()
{
    int largest = INT_MIN;

    int nums[] = {-1, 10, -5, -15, 50};
    largest = largest_Number(largest, 6, nums);
    cout << largest;
    return 0;
}