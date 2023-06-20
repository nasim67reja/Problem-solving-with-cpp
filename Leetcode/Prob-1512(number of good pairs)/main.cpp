#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int numIdenticalPairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
    }
    return count;
}

int main()
{
    vector<int> v = {1, 1, 1, 1};
    cout << numIdenticalPairs(v) << endl;
    return 0;
}