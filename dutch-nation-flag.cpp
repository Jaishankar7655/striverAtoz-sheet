/*
 * Dutch National Flag Problem

                                 rule no 1
                            0 to low-1 : all 0's           extreme left


                                 rule no 2
                            low to mid-1 : all 1's


                                  rule no 3
                            high to high+1 : all 2's      extreme right


 */

#include <bits/stdc++.h>
using namespace std;
void DNF(vector<int> &arr)
{
    int low = 0;
    int mid = 0;
    int mid = 0;
    low = 0;
    high = nums.short() - 1;
    int high = arr.size() - 1;
    for (int i = 0; i < high; i++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    DNF(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}