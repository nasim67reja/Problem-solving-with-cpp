#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int findFirstOccurrence(const string &needle, const string &haystack)
{
    int needleLength = needle.length();
    int haystackLength = haystack.length();

    if (needleLength > haystackLength)
    {
        return -1;
    }

    for (int i = 0; i <= haystackLength - needleLength; i++)
    {
        int j;
        for (j = 0; j < needleLength; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }

        if (j == needleLength)
            return i;
    }

    return -1;
}

int main()
{
    string needle = "sad";
    string haystack = "sadbutsad";

    int index = findFirstOccurrence(needle, haystack);
    cout << index << endl; // Output: 30

    return 0;
}
