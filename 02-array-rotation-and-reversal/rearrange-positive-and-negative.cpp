#include <bits/stdc++.h>
using namespace std;

//  brute force approaches
// void rearrange(vector<int> &nums)
// {
//     vector<int> positive;
//     vector<int> negative;
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] < 0)
//         {
//             negative.push_back(nums[i]);
//         }
//         else
//         {
//             positive.push_back(nums[i]);
//         }
//     }

//     for (int i = 0; i < n/2; i++)
//     {
//         nums[2 * i] = positive[i];
//         nums[2 * i + 1] = negative[i];
//     }

// }

// aptimal approch

// vector<int> rearrange(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 0);
//     int positive = 0;
//     int negative = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] < 0)
//         {
//             ans[negative] = nums[i];
//             negative = negative + 2;
//         }
//         else
//         {
//             ans[positive] = nums[i];
//             positive = positive + 2;
//         }
//     }
//     return ans;
// }





// 2nd variety of the question

void rearrange(vector<int> &nums)
{
    int n = nums.size();
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            negative.push_back(nums[i]);
        }
        else
        {
            positive.push_back(nums[i]);
        }
    }
    int n2 = negative.size();
    int n3 = positive.size();
    cout << "size of the negative array " << n2 << endl;
    cout << "size of the positive array " << n3 << endl;
    // array = {9 -1 4 -3 5 -8 2 3 4 5}
    // negative = {-1, -3, -8}                   n2= 3
    // positive = {9, 4, 5, 2, 3, 4, 5}          n3 = 7
    for (int i = 0; i < n2; i++)
    {
        nums[2 * i] = positive[i];
        nums[2 * i + 1] = negative[i];
    }
    int index = 2*n2;
    for ( int i = n2; i < n; i++)
    {
        nums[index] = positive[i];
        index++;
    }    
}

int main()
{

    vector<int> arr = {9, 4, 3, 2, 4, 5, -1, -3, -8};

    rearrange(arr);
    for (auto i : arr)
    {
        cout << i << "  ";
    }
    return 0;
}