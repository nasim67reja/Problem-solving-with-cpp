#include <bits/stdc++.h>
#include <set>
using namespace std;

// 2529. Maximum Count of Positive Integer and Negative Integer

int maximumCount(vector<int> &v)
{
    int lower = (lower_bound(v.begin(), v.end(), 0)) - v.begin();

    int upper = v.size() - ((upper_bound(v.begin(), v.end(), 0)) - v.begin());

    return lower > upper ? lower : upper;
}

// 1351. Count Negative Numbers in a Sorted Matrix

int countNegatives(vector<vector<int>> &grid)
{
    int totalNeg = 0;
    for (auto v : grid)
    {
        sort(v.begin(), v.end());

        int lower = upper_bound(v.begin(), v.end(), -1) - v.begin();
        totalNeg += lower;
    }
    return totalNeg;
}

// 2389. Longest Subsequence With Limited Sum

vector<int>
answerQueries(vector<int> &nums, vector<int> &queries)
{

    sort(nums.begin(), nums.end());

    // Using Upper_bound
    // for (int i = 1; i < nums.size(); i++)
    //     nums[i] += nums[i - 1];

    vector<int> v;
    // for (auto q : queries)
    //     v.push_back(upper_bound(nums.begin(), nums.end(), q) - nums.begin());
    return v;

    // brute force:
    // for (int i = 0; i < queries.size(); i++)
    // {

    //     int sum = 0, count = 0;
    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //         sum += nums[j];
    //         if (sum <= queries[i])
    //             count++;
    //         else if (sum >= queries[i])
    //             break;
    //     }
    //     res.push_back(count);
    // }

    // return res;
}

// 349. Intersection of Two Arrays

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> se;
    for (int num : nums1)
    {
        int s = 0, e = nums2.size() - 1, mid = s + (e - s) / 2;
        sort(nums2.begin(), nums2.end());
        while (e >= s)
        {
            if (nums2[mid] == num)
            {
                se.insert(num);
                break;
            }
            else if (num > nums2[mid])
                s = mid + 1;
            else if (num < nums2[mid])
                e = mid - 1;
            mid = s + (e - s) / 2;
        }
    }
    vector<int> v;

    for (auto val : se)
        v.push_back(val);

    return v;
}

// int main()
// {
//     vector<int> v1 = {1, 2, 2, 1};
//     vector<int> v2 = {2, 2}; // 4,4,8,9,9

//     intersection(v1, v2);
//     return 0;
// }

// //////// 🔥🔥🔥🔥🔥🔥🔥🔥🔥 Medium
// 852. Peak Index in a Mountain Array
// int peakIndexInMountainArray(vector<int> &arr)
// {
//     int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2;
//     while (e > s)
//     {
//         if (arr[mid] < arr[mid + 1])
//             s = mid + 1;
//         else
//             e = mid;
//         mid = s + (e - s) / 2;
//     }

//     return s;
// }

// 34. Find First and Last Position of Element in Sorted Array

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v;
    // first occurance
    auto it = find(nums.begin(), nums.end(), target);
    if (it != nums.end())
        v.push_back(it - nums.begin());
    else
        v.push_back(-1);

    // last occurance
    int s = 0, e = nums.size() - 1, mid = s + (e - s) / 2, ans = -1;
    while (e >= s)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target > nums[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    v.push_back(ans);
    return v;
}

int main()
{
    vector<int> v1 = {};

    searchRange(v1, 0);
    return 0;
}
