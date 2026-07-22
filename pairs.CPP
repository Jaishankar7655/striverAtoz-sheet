#include <bits/stdc++.h>
using namespace std;
void fun()
{
    pair<int, int> p = {1, 2};
    cout << p.first << "  " << p.second;
    cout << endl;
    pair<int, pair<int, int>> A = {3, {4, 5}};
    cout << A.first << " " << A.second.first << " " << A.second.second;
    cout << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 5}, {5, 6}};
    cout << arr[0].second;
}
int main()
{
    
    fun();
    return 0;
}
