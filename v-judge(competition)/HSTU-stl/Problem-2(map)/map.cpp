// #include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        int c;
        string k;
        cin >> c >> k;
        if (c == 0)
        {
            int num;
            cin >> num;
            m[k] = num;
        }
        else if (c == 1)
        {
            cout << m[k] << endl;
        }
    }

    return 0;
}