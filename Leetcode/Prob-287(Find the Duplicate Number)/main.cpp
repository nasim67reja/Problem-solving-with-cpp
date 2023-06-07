#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    // normal approach

    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] == nums[i - 1])
        {
            return nums[i];
        }
    }
    // return -1;

    // binary search
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int s = i + 1,
    //         e = nums.size() - 1,
    //         mid = s + (e - s) / 2;
    //     while (s <= e)
    //     {
    //         if (nums[i] == nums[mid])
    //             return nums[mid];
    //         else if (nums[i] > nums[mid])
    //             s = mid + 1;
    //         else
    //             e = mid - 1;
    //         mid = s + (e - s) / 2;
    //     }
    // }
    return -1;
}

int main()
{
    vector<int> vp = {1, 3, 4, 2, 2};
    cout << findDuplicate(vp);
    return 0;
}