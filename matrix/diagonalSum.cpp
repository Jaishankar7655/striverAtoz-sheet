#include <bits/stdc++.h>
using namespace std;
int diagonalSum(vector<vector<int>> &matrix)
{
    int sum = 0;
    int n = matrix.size();
    for(int i =0; i <n;i++)
    {
       sum = matrix[i][i]+sum;
       if(i!=n-i-1)
       {
       sum = matrix[i][n-i-1];
       }
    }
    return sum ;
    
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {1,1, 1, 1},
        {1 , 1, 1, 1},
        {1, 1, 1, 1}
                                 };
        
     int result = diagonalSum(matrix);
     cout << "Diagonal Sum: " << result << endl;
}