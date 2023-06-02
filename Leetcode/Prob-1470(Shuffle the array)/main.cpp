#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> v;
    int s = 0,
        e = n;
    while (s < n && e < nums.size())
    {
        v.push_back(nums[s]);
        v.push_back(nums[e]);
        s++, e++;
    }
    return v;
}

int main()
{
    vector<int> v = {2, 5, 1, 3, 4, 7};
    vector<int> newV = shuffle(v, 3);
    for (auto val : newV)
        cout << val << " "; // 2 3 5 4 1 7
    return 0;
}