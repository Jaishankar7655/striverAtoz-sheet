#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<vector<int>> &matrix, int target)
{
    int maxSum = INT_MIN;
 
    for (int i = 0; i < matrix.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < matrix[i].size(); j++)
        {
            sum = sum + matrix[i][j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    int target = 12;
    auto result = linearSearch(matrix, target);
    cout << result;
    return 0;
}