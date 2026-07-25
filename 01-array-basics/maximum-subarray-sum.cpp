#include <bits/stdc++.h>
using namespace std;
void maxOfSubarray(int arr[], int n)
{

    int max_sum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int cs = 0;
        for (int end = st; end < n; end++)
        {
            cs = cs + arr[end];
            max_sum = max(cs, max_sum);
        }
    }
    cout << max_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    maxOfSubarray(arr, 6);
}