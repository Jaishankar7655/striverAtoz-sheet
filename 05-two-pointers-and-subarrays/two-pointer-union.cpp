#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfArrays(vector<int> &arr, vector<int> &arr2)
{
    int i = 0;
    int j = 0;
    int n1 = arr.size();
    int n2 = arr2.size();
    vector<int> result;
    while (i < n1 && j < n2)
    {
        if (arr[i] < arr[j] && arr[i] == arr[j])
        {
            result.push_back(arr[i]);
            i++;
            j++;
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    vector<int> arr2 = {0, 1, 0, 3, 12, 11, 12, 44, 55, 23, 45, 11, 11, 11, 11};
    vector<int> result = unionOfArrays(arr, arr2);
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}
