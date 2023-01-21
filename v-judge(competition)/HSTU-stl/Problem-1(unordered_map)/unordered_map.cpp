#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    //     // unordered_map<int, int> umap;
    vector<int> v;
    int n;

    while (true)
    {
        cin >> n;
        v.push_back(n);
        if (cin.peek() == '\n')
        {
            break;
        }
    }

    cout << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;
    return 0;
}

// int main()
// {
//     int sum = 0;
//     cout << "enter number" << endl;
//     int i = 0;
//     while (true)
//     {
//         cin >> i;
//         sum += i;
//         // cout << i << endl;
//         if (cin.peek() == '\n')
//         {
//             break;
//         }
//     }

//     cout << "result: " << sum << endl;
//     return 0;
// }