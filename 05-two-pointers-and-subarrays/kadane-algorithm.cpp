#include <bits/stdc++.h>
using namespace std;
int max_Array(int array[], int n)
{
    int cs = 0;
    int max_sum = INT_MAX;
    for (int i = 0; i <n ; i++)
    {
        cs += array[i];
        max_sum = min(cs, max_sum);
    }
    return max_sum;
}
int main()
{
    int array[] = {1, 2, -4, -6, -7, 8, 4, -2};
    int sum;
    sum = max_Array(array, 8);
    cout << sum;
    return 0;
}