// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     map<pair<int, int>, string> codewords;
//     while (n--)
//     {
//         int p1, p2;
//         string name;
//         cin >> p1 >> p2 >> name;
//         codewords[{p1, p2}] = name;
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int f, s;
//         cin >> f >> s;
//         pair<int, int> p;
//         p.first = f;
//         p.second = s;
//         cout << codewords[p] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main()
// {
//     unordered_map<int, int> count;
//     int x;
//     while (cin >> x)
//     {
//         count[x]++;
//     }
//     for (auto &[num, cnt] : count)
//     {
//         cout << num << " " << cnt << endl;
//     }
//     return 0;
// }

#include <iostream>
// #include <sstream>
#include <unordered_map>
#include <stack>
using namespace std;

int main()
{
    unordered_map<int, int> count;
    stack<pair<int, int>> mystack;

    // string line;
    // getline(cin, line);
    // stringstream ss(line);
    int x;
    while (cin >> x)
    {
        count[x]++;
    }
    for (auto val : count)
        mystack.push({val.first, val.second});

    while (!mystack.empty())
    {
        cout << mystack.top().first << " " << mystack.top().second << endl;
        mystack.pop();
    }

    return 0;
}