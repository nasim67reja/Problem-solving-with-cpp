#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// reverse arr
vector<int> reverse(vector<int> v)
{
    // to - pointer approach

    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void printVector(auto v)
{
    for (auto val : v)
        cout << val << " ";
    cout << endl;
}

// It will not pass

// bool containsDuplicate(vector<int> &nums)
// {
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] == nums[j])
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// TC=>nlog(n)
bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}

// 2160. Minimum Sum of Four Digit Number After Splitting Digits

int minimumSum(int num)
{
    vector<string> v;
    for (int i = 0; i < 4; i++)
    {
        string s = to_string(num % 10);
        v.push_back(s);
        num = (num / 10);
    }
    sort(v.begin(), v.end());
    string s = v[0] + v[3];
    string s2 = v[1] + v[2];

    return stoi(s) + stoi(s2);

    // alternative
    // int a[4] = {n / 1000, n / 100 % 10, n / 10 % 10, n % 10};
    // sort(a, a + 4);
    // return a[0] * 10 + a[1] * 10 + a[2] + a[3];
}

// Leetcode 1365. How Many Numbers Are Smaller Than the Current Number

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    vector<int> v;

    for (int val : nums)
    {
        auto low = lower_bound(nums.begin(), nums.end(), val);
        cout << low - nums.begin() << "";
    }
    return nums;
}

int main()
{
    vector<int> vt{8, 1, 2, 2, 3};
    smallerNumbersThanCurrent(vt);

    // cout << minimumSum(4009);
    // vector<int> v;
    // v.push_back(4);
    // v.push_back(7);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(21);

    // vector<int> rv = reverse(v);
    // cout << "Before Reversing ";
    // printVector(v);
    // cout << "After Reversing ";
    // printVector(rv);
    // cout << containsDuplicate(v) << endl;
    return 0;
}