#include<bits/stdc++.h>
using namespace std;
void markZero(vector<vector<int>>& mat)
{
  for(int i=0; i<mat.size(); i++)
    {
     for(int j=0; j<mat[i].size(); j++)
      {
	    cout<<mat[i][j]<<" ";
      }   
      cout<<endl;
    } 

}
int main()
{
  vector<vector<int>> matrix = {
			       {1, 1, 1, 1},
			       {1, 0, 0, 1},
			       {1, 1, 0, 1},
			       {1, 1, 1, 1},
			       };
   markZero(matrix);  
 return 0;
}