#include <iostream>
using namespace std;
#include <bits/stdc++.h>

char findTheDifference(string s, string t)
{
    unordered_map<char, int> umap;
    for (int i = 0; i < s.size(); i++)
        umap[s[i]] = umap[s[i]] ? umap[s[i]] + 1 : 1;

    for (int i = 0; i < t.size(); i++)
    {
        if (!umap[t[i]])
            return t[i];

        umap[t[i]]--;
    }
    return ' ';
}

//  alternative way
// char findTheDifference(string s, string t) {
//     int freq[26] = {0};

//     // Count the frequency of each character in string s
//     for (char c : s) {
//         freq[c - 'a']++;
//     }

//     // Subtract the frequency of each character in string t
//     for (char c : t) {
//         freq[c - 'a']--;
//     }

//     // Find the character with a non-zero frequency
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] != 0) {
//             return 'a' + i;
//         }
//     }

//     // Default return value (not expected to be reached)
//     return '\0';
// }

int main()
{
    char res = findTheDifference("abcd", "abedc");
    cout << res << endl;
    return 0;
}