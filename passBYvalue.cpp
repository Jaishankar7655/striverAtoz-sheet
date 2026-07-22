#include <bits/stdc++.h>
using namespace std;
void passByrefrence(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        // cout<<arr[i]<<" ";
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    passByrefrence(arr, 5);

    // example of call by refrence

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}