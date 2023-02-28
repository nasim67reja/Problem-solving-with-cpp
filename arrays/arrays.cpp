#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverseString(vector<char> &s)
{

    // int e = s.size() - 1;
    // int mid = e / 2;
    // for (int i = 0; i <= mid; i++)
    //     swap(s[i], s[e - i]);

    // two pointer
    int st = 0, e = s.size() - 1;
    while (st <= e)
    {
        swap(s[st], s[e]);
        st++, e--;
    }
}

// 189. Rotate Array

// void rotate(vector<int> &nums, int k)
// {

//     int p = k % nums.size();

//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(), nums.begin() + p);
//     reverse(nums.begin() + p, nums.end());

//     for (int val : nums)
//         cout << val << " ";
//     cout << endl;
//     // time limit exceeds
//     // int size = nums.size() - 1;
//     // for (int i = 0; i < k; i++)
//     // {
//     //     int temp = nums[size - 0];

//     //     for (int j = size; j > 0; j--)
//     //         nums[j] = nums[j - 1];

//     //     nums[0] = temp;
//     // }
// }

// 88. Merge Sorted Array

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    // for (int i = 0; i < n; i++)
    //     nums1[m + i] = nums2[i];
    // sort(nums1.begin(), nums1.end());

    // two pointers
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {

        cout << nums1[i] << " " << nums2[j] << endl;
        if (nums1[i] < nums2[j])
            nums1[k++] = nums1[i++];
        else
            nums1[k++] = nums2[j++];
    }
    while (i < m)
        nums1[k++] = nums1[i++];

    while (j < n)
        nums1[k++] = nums1[j++];

    // int i = m - 1;
    // int j = n - 1;
    // int k = m + n - 1;
    // while (i >= 0 && j >= 0)
    // {
    //     if (nums1[i] > nums2[j])
    //         nums1[k--] = nums1[i--];
    //     else
    //         nums1[k--] = nums2[j--];
    // }
    // while (j >= 0)
    //     nums1[k--] = nums2[j--];

    //  if third array or vector is wanter
    // vector<int> v;
    // int i = 0, j = 0;
    // int k = 0;
    // while (i < m && j < n)
    // {
    //     if (nums1[i] < nums2[j])
    //         v[k++] = nums1[i++];
    //     // v.push_back(nums1[i++]);
    //     else
    //         v[k++] = nums2[j++];

    //     // v.push_back(nums2[j++]);
    // }
    // // if remaining part exist in first array
    // while (i < m)
    //     v[k++] = nums1[i++];

    // // v.push_back(nums1[i++]);
    // // if remaining part exist in second array
    // while (j < n)
    //     v[k++] = nums2[j++];

    // // v.push_back(nums2[j++]);

    for (auto val : nums1)
        cout << val << " ";
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    merge(nums1, 3, nums2, 3);
    return 0;
}