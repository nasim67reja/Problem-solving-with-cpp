#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int sum(vector<int> &arr)
{
    if (arr.size() == 0)
        return 0;
    int s = 0,
        e = arr.size() - 1;
    int count = 0;
    while (s <= e)
    {
        if (s == e)
            count += arr[s];
        else
            count += arr[s] + arr[e];
        s++, e--;
    }
    return count;
};

int maximumWealth(vector<vector<int>> &accounts)
{
    int large = INT_MIN;
    for (int i = 0; i < accounts.size(); i++)
    {
        int res = sum(accounts[i]);
        if (res > large)
            large = res;
    }
    return large;
}

int main()
{
    vector<vector<int>> vov = {{1, 2, 3}, {3, 2, 1}};
    cout << maximumWealth(vov) << endl;
    return 0;
}