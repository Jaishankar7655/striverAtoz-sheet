#include <bits/stdc++.h>
using namespace std;
int large(int arr[], int n)
{
  int large_number = arr[0];
  for(int i =0; i <n; i++)
  {
      if (large_number < arr[i])
      {
          large_number = arr[i];
      }
  }
return large_number;
}

int main()
{

    int arr[]= {1, 2, -1, -3, 5, 1};
    cout<<large(arr, 6)<<endl;
return 0;
}
