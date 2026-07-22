#include <bits/stdc++.h>
using namespace std;
int sorted(int arr[], int n)
{
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int arr[] = {1, 2, 2, 3, 3, 4, 4, 5};
    sorted(arr, 8);
    return 0;
}