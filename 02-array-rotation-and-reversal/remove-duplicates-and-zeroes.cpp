#include <bits/stdc++.h>
using namespace std;
vector<int> moveZeros(vector<int> &arr, vector<int> &arr2)
{ 
    int arr_size1 = arr.size();
    int arr_size2 = arr2.size();
    set <int> temp;
    for (int i = 0; i < arr_size1; i++)
    {
      temp.insert(arr[i]);
    }
    for (int i = 0; i < arr_size2; i++)
    {
      temp.insert(arr2[i]);
    }
  
    return vector<int>(temp.begin(), temp.end());
}
int main()
{

    vector<int> arr = {0, 1, 0, 3, 12};
    vector<int> arr2 ={0, 1, 0, 3, 12, 11, 12, 44, 55, 23, 45, 11, 11, 11, 11};
    vector<int> result = moveZeros(arr, arr2);
    for(auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}