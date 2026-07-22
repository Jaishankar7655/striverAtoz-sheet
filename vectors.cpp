#include <bits/stdc++.h>
using namespace std;

void fun()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    v.emplace_back(7);
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << "  " << vec[i].second << endl;
    }

    vector<int> v1(5, 10);
    v1.push_back(20);
    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}

int main()
{

    fun();
    return 0;
}