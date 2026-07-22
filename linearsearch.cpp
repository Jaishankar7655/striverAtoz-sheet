#include <bits/stdc++.h>
using namespace std;
// to find the target linear search
int linearSearch(int arr[], int target, int size)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "found at index: " << i << endl;
            cout << "value: " << arr[i]<<endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "not found" << endl;
    }
    return -1;
}
int main()
{

    int arr[] = {1, 9, 4, 9, 1, 5, 9, 9, 9, 9, 9};
    int target = 9;
    linearSearch(arr, target, 11);
    return 0;
}
