#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate90(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<< matrix[j][n - 1 - i] << " ";
        }
        cout << endl;
    }
  
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
       {5, 6, 7, 8},
       {9, 10, 11, 12},
        {13, 14, 15, 16}};
    vector<vector<int>> rotated =rotate90(matrix);
    for (const auto &row : rotated)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}