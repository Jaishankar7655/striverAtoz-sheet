#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int nums[], int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    for (auto it : st)
    {
        cout << it << " ";
    }
}

int main()
{
    int nums[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7};
    removeDuplicate(nums, 13);
    return 0;
}