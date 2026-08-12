#include <bits/stdc++.h>
using namespace std;
pair<int, int> linearSearch(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == target)
            {
                return {i , j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> matrix = {
                                    {1, 2, 3},
                                    {4, 5, 6},
                                    {7, 8, 9},
                                    {10,11,12,}};
    int target = 8;
}
