#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> runningSum(vector<int> &nums)
{
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        v.push_back(sum);
    }

    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    runningSum(v);
    return 0;
}