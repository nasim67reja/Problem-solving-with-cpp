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

// 1859. Sorting the Sentence

string sortSentence(string s)
{
    map<int, string> m;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        m[word.back()] = word;
    }
    string str = "";
    for (auto i : m)
    {
        i.second.pop_back();
        str = str + " " + i.second;
    }

    str.erase(0, 1);
    return str;
}

// 2500. Delete Greatest Value in Each Row
#include <type_traits>
int deleteGreatestValue(vector<vector<int>> &grid)
{
    int answer = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        if (typeid(grid[i]) == typeid(vector<int>))
            sort(grid[i].begin(), grid[i].end());
    }

    for (int i = 0; i < grid[0].size(); i++)
    {
        int max = grid[0][i];
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[j][i] > max)
                max = grid[j][i];
        }
        answer += max;
    }

    return answer;
}

// 2037. Minimum Number of Moves to Seat Everyone

int minMovesToSeat(vector<int> &seats, vector<int> &students)
{
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    int moves = 0;
    for (int i = 0; i < seats.size(); i++)
    {
        moves = moves + abs(students[i] - seats[i]);
    }
    return moves;
}

// 2418. Sort the People

vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    map<int, string> m;
    for (int i = 0; i < heights.size(); i++)
        m[heights[i]] = names[i];
    names.clear();
    for (auto val : m)
        names.insert(names.begin(), val.second);

    return names;
}

// 1913. Maximum Product Difference Between Two Pairs int main()

int maxProductDifference(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    return (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
}

// 1464. Maximum Product of Two Elements in an Array int main()
int maxProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
}

// 2089. Find Target Indices After Sorting Array

vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] == target)
            v.push_back(i);

    return v;
}

// 561. Array Partition

int arrayPairSum(vector<int> &nums)
{
    int sum = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
        if ((i % 2) == 0)
            sum += nums[i];

    return sum;
}

// 905. Sort Array By Parity

vector<int>
sortArrayByParity(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        int temp = nums[i];
        int j = i - 1;

        if (temp % 2 != 0)
            continue;
        else
        {
            while (j >= 0)
            {

                if (nums[j] > temp || nums[j] % 2 != 0)
                    nums[j + 1] = nums[j];
                else
                    break;
                j--;
            }
            nums[j + 1] = temp;
        }
    }

    return nums;
}

// 2363. Merge Similar Items
vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    vector<vector<int>> vov;
    map<int, int> m;
    for (auto val : items1)
        m[val[0]] += val[1];
    for (auto val : items2)
        m[val[0]] += val[1];

    for (auto val : m)
        vov.push_back({val.first, val.second});
    return vov;
}

//  🔥🔥🔥🔥🔥🔥 Medium Problem 🔥🔥🔥🔥🔥🔥🔥

// 2545. Sort the Students by Their Kth Score

vector<vector<int>>
sortTheStudents(vector<vector<int>> &score, int k)
{
    for (int i = 1; i < score.size(); i++)
    {
        vector<int> vTemp = score[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (score[j][k] < vTemp[k])
                score[j + 1] = score[j];
            else
                break;
            j--;
        }
        score[j + 1] = vTemp;
    }
    return score;
}

// 1637. Widest Vertical Area Between Two Points Containing No Points

int maxWidthOfVerticalArea(vector<vector<int>> &points)
{
    set<int> s;
    vector<int> v;
    for (int i = 0; i < points.size(); i++)
        s.insert(points[i][0]);

    for (auto val : s)
        v.push_back(val);

    int maxDif = 0;

    for (int i = 0; i < v.size() - 1; i++)
        if ((v[i + 1] - v[i]) > maxDif)
            maxDif = v[i + 1] - v[i];
    return maxDif;
}

// 1877. Minimize Maximum Pair Sum in Array

int minPairSum(vector<int> &nums)
{
    vector<pair<int, int>> vp;

    sort(nums.begin(), nums.end());
    int minSum = nums[0] + nums[nums.size() - 1];

    for (int i = 0; i < nums.size() / 2; i++)
    {
        if ((nums[i] + nums[nums.size() - i - 1]) > minSum)
            minSum = nums[i] + nums[nums.size() - i - 1];
    }
    return minSum;
    // vp.push_back({nums[i], nums[nums.size() - i - 1]});

    // // return vp[0].first + vp[0].second;
}

// 1. Two Sum

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        int num = target - nums[i];

        for (int j = i + 1; j < nums.size(); j++)
        {
            if (num == nums[j])
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }

    return v;
}

int main()
{
    vector<int> v = {3, 3};
    twoSum(v, 6);

    return 0;
}