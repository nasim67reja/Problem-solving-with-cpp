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

void printVector(vector<int> v)
{
    for (int val : v)
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

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);
    v.push_back(4);
    v.push_back(21);

    // vector<int> rv = reverse(v);
    // cout << "Before Reversing ";
    // printVector(v);
    // cout << "After Reversing ";
    // printVector(rv);
    cout << containsDuplicate(v) << endl;
    return 0;
}