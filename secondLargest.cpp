#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n)
{
    int large_number = arr[0];
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large_number)
        {
            large_number = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_largest && arr[i] != large_number)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main()
{

    int arr[] = {1, -2, 4, -5, 7, -7, 8, 12, -12};
    int large = secondlargest(arr, 9);
    cout << large << endl;

    return 0;
}