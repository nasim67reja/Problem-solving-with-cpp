#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
        res.push_back(nums[nums[i]]);
    for (auto el : res)
        cout << el << " ";
    cout << endl;
    return res;
}

// vector<int> reverseArray(vector<int> &nums)
// {
//     int s = 0, e = nums.size() - 1;
//     while (e >= s)
//     {
//         swap(nums[s], nums[e]);
//         s++;
//         e--;
//     }
//     for (auto el : nums)
//         cout << el << " ";
//     cout << endl;

//     return nums;
// }

vector<int> mergeSortedArray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> v;

    int s1 = 0, s2 = 0;

    while (s1 < nums1.size() && s2 < nums2.size())
    {
        if (nums1[s1] <= nums2[s2])
        {
            v.push_back(nums1[s1]);
            s1++;
        }
        else
        {
            v.push_back(nums2[s2]);
            s2++;
        }
    }

    // if element exist
    while (s1 < nums1.size())
    {
        v.push_back(nums1[s1]);
        s1++;
    }
    while (s2 < nums2.size())
    {
        v.push_back(nums2[s2]);
        s2++;
    }

    for (auto val : v)
        cout << val << " ";
    cout << endl;

    return v;
}

vector<int> moveZeros(vector<int> &nums1)
{
    int i = 0;
    for (int j = 0; j < nums1.size(); j++)
    {
        if (nums1[j] != 0)
            swap(nums1[j], nums1[i]);
        i++;
    }
    for (auto val : nums1)
        cout << val << " ";

    return nums1;
}

// 2011. Final Value of Variable After Performing Operations

int finalValueAfterOperations(vector<string> &operations)
{
    int x = 0;
    for (auto val : operations)
    {
        if (val == "++X" || val == "X++")
            x++;
        else
            x--;
    }
    return x;
}

// 557. Reverse Words in a String III

string reverseWords(string s)
{
    vector<string> words;
    string word;
    // step 1: make the word an array's element
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
            word += s[i];
    }
    // push the last word
    words.push_back(word);

    // step 2: reverse each word or element of array
    for (int i = 0; i < words.size(); i++)
    {
        reverse(words[i].begin(), words[i].end());
    }
    //  step 3: make the array's element into a plain string
    return accumulate(words.begin(), words.end(), string(""), [](string a, string b)
                      { return a + " " + b; })
        .substr(1);
}

int main()
{
    vector<string> v1 = {"--X", "X++", "X++"};

    cout << reverseWords("God Ding");
    return 0;
}