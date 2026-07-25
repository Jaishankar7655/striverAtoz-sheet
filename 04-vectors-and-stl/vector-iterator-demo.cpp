#include <bits/stdc++.h>
using namespace std;
void fun()
{

    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    v.emplace_back(7);

    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end();

    vector<int>::iterator it = v.end();
    it = it - 2;
    cout << *(it) << endl;

    // 1st and easy method to print vector elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // second method to print vector elements
    for (auto it : v)
    {
        cout << it << " ";
    }
    // third method to print vector elements
    cout << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // easiest way to print vector elements
    for (auto it : v)
    {
        cout << it << " ";
    }

    //    TO REMOVE ELEMENTS FROM VECTOR
    cout << endl;
    v.erase(v.begin() + 1, v.begin() + 3);
    for (auto it : v)
    {
        cout << it << " ";
    }

    //  TO INSERT ELEMENTS IN VECTOR
    cout << endl;

    vector <int> n(6,5);

    n.insert(n.begin(), {3,3,4,5,5});
    for (auto it : n)
    {
        cout << it << " ";
    }
}

int main()
{

    fun();
    return 0;
}