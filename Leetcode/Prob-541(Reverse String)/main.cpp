#include <iostream>
using namespace std;
#include <bits/stdc++.h>

string reverseStr(string s, int k)
{
    vector<char> vec(s.begin(), s.end());
    for (int start = 0; start < vec.size(); start += 2 * k)
    {
        int end = min(start + k - 1, static_cast<int>(vec.size()) - 1);
        reverse(vec.begin() + start, vec.begin() + end + 1);
    }
    return string(vec.begin(), vec.end());
}

int main()
{
    string s = "abcdefg";
    reverseStr(s, 2);

    return 0;
}