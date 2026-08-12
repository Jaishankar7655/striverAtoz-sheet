#include <bits/stdc++.h>
using namespace std;
void markZero(vector<vector<int>> &mat, int n, int m)
{
  int row[n] = {0};
  int col[m] = {0};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j] == 0)
      {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (row[i] == 1 || col[j] == 1)
      {
        mat[i][j] = 0;
      }
    }
  }
}
int main()
{
  vector<vector<int>> mat = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {1, 0, 0, 1}};
  int n = 4;
  int m = 4;
  markZero(mat, n, m);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}