// #include <bits/stdc++.h>
// using namespace std;
// int maxArea(vector<int> &height)
// {
//     int n = height.size();
//     int maxArea = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int width = j - i;
//             int h = min(height[i], height[j]);
//             int area = width * h;
//             maxArea = max(maxArea, area);
//         }
//     }
//     return maxArea;
// }

// int main()
// {
//     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int result = maxArea(height);
//     cout << result;
// }

#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int n = height.size();
    int i = 0;
    int j = n-1;
    int maxArea = INT_MIN;
    while (i < j)
    {
        int w = j - i;
        int h = min(height[i], height[j]);
        int area = w * h;
        maxArea = max(maxArea, area);
        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxArea;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height);
    cout << result;
}