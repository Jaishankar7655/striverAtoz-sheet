#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 7;
    int start = 0;
    int end = size - 1;
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    while (start < 3)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}