#include <bits/stdc++.h>
using namespace std;

// int sortArray(vector<int> &nums)
// {
//     int n = nums.size();
//     int count0 = 0; // 5
//     int count1 = 0; // 4
//     int count2 = 0; // 3
//     int count3 = 0; // 2
//     int count4 = 0; // 2
//     int count5 = 0; // 2

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == 0)
//             count0++;
//         else if (nums[i] == 1)
//             count1++;
//         else if (nums[i] == 2)
//             count2++;
//         else if (nums[i] == 3)
//             count3++;
//         else if (nums[i] == 4)
//             count4++;
//         else
//             count5++;
//     }
//     for (int i = 0; i < count0; i++)
//     {
//         nums[i] = 0;
//         cout << nums[i];
//     }

//     for (int i = count0; i < count1 + count0; i++)
//     {
//         nums[i] = 1;
//         cout << nums[i];
//     }
//     for (int i = count0 + count1; i < count1 + count2 + count0; i++)
//     {
//         nums[i] = 2;
//         cout << nums[i];
//     }
//     for (int i = count0 + count1 + count2; i < count1 + count2 + count0 + count3; i++)
//     {
//         nums[i] = 3;
//         cout << nums[i];
//     }
//     for (int i = count0 + count1 + count2 + count3; i < count1 + count2 + count0 + count3 + count4; i++)
//     {
//         nums[i] = 4;
//         cout << nums[i];
//     }
//     for (int i = count1 + count2 + count0 + count3 + count4 + count0; i < n; i++)
//     {
//         nums[i] = 5;
//         cout << nums[i];
//     }
// }

// int sortArray(vector<int> &nums)
// {
//     int n = nums.size();
//     int low = 0, mid = 0, high = n - 1;
//     while (mid <= high)
//     {
//         if (nums[mid] == 0)
//         {
//             swap(nums[low], nums[mid]);
//             low++;
//             mid++;
//         }

//         else if (nums[mid] == 1)
//             mid++;
//         else if (nums[mid] == 2)
//         {
//             swap(nums[high], nums[mid]);
//             high--;
//         }
//     }
// }

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
