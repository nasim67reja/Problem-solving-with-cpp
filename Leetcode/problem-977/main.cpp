#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> sortedSquares(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
        nums[i] = nums[i] * nums[i];
    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{
    vector<int> v = {-4, -1, 0, 3, 10};
    vector<int> ans = sortedSquares(v);
    for (auto val : ans)
        cout << val << " ";
    return 0;
}