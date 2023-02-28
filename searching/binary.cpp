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

// find element in a rotated sorted array

int search(vector<int> &nums, int target)
{

    // find pivet element
    int sp = 0, ep = nums.size() - 1, midp = sp + (ep - sp) / 2;

    while (ep > sp)
    {
        if (nums[midp] >= nums[0])
            sp = midp + 1;
        else
            ep = midp;
        midp = sp + (ep - sp) / 2;
    }
    int pivot = sp;

    // now find the actual element

    int s = 0, e = nums.size() - 1;

    if (target == nums[pivot])
        return pivot;

    if (nums[pivot] <= target && target <= nums[nums.size() - 1])
        s = pivot;
    else
        e = pivot - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

// 268. Missing Number

int missingNumber(vector<int> &nums)
{

    // Binary search

    sort(nums.begin(), nums.end());
    int s = 0, e = nums.size() - 1, mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] <= mid)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return s;

    // broute force solution
    //     int n = nums.size();
    //     return ((n * n + n) / 2) - accumulate(nums.begin(), nums.end(), 0);
}

// 875. Koko Eating Bananas

// long hour = 0;
// for (int i = 0; i < piles.size(); i++)
// {
//     if (mid >= piles[i])
//         hour++;
//     else
//     {
//         int remainingPart = piles[i];
//         while (remainingPart > 0)
//         {
//             hour++;
//             remainingPart -= mid;
//         }
//     }
//     if (hour > h)
//         return false;
// }
// return true;

bool isPossible(vector<int> &piles, int h, int mid)
{

    long hours = 0;
    for (int i : piles)
    {
        hours += i / mid;
        if (i % mid != 0)
            hours++;
    }
    return hours <= h;
}
int minEatingSpeed(vector<int> &piles, int h)
{

    int s = 1, ans = -1;
    int e = 1e9;

    int mid = s + (e - s) / 2;

    while (e >= s)
    {
        if (isPossible(piles, h, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

// 704. Binary Search

int searchb(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1,
        mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

// 2540. Minimum Common Value

int getCommon(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    for (int val : nums1)
    {
        int s = 0, e = nums2.size() - 1, mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums2[mid] == val)
                return nums2[mid];
            else if (val > nums2[mid])
                s = mid + 1;
            else
                e = mid - 1;
            mid = s + (e - s) / 2;
        }
    }
    return -1;
}

// 441. Arranging Coins

int arrangeCoins(int n)
{
    long long int s = 0,
                  e = n, mid = s + (e - s) / 2, ans = 1;

    while (s <= e)
    {
        long long int p = (mid * mid + mid) / 2;
        if (p >= n)
        {
            ans = mid;
            if (p > n)
                ans--;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
    // 1804289383
}

// 744. Find Smallest Letter Greater Than Target

char nextGreatestLetter(vector<char> &letters, char target)

{
    int s = 0, e = letters.size() - 1, mid = s + (e - s) / 2;
    int ans = letters[0];
    while (s <= e)
    {
        if (target < letters[mid])
        {
            ans = letters[mid];
            e = mid - 1;
        }
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

// 35. Search Insert Position

int searchInsert(vector<int> &nums, int target)
{
    // return lower_bound(nums.begin(), nums.end(), target) - nums.begin();

    int s = 0, e = nums.size() - 1, mid = s + (e - s) / 2, ans = nums.size();
    while (s <= e)
    {
        if (nums[mid] >= target)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v1 = {1, 3, 5, 6};
    int n;
    cin >> n;
    cout << searchInsert(v1, n) << endl;

    return 0;
}
