#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> vp(numRows);

    for (int i = 0; i < numRows; i++)
    {
        vp[i] = vector<int>();
    }
    for (int i = 0; i < numRows; i++)
    {
        vp[i][0] = 1;
        vp[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            vp[i][j] = vp[i - 1][j - 1] + vp[i - 1][j];
        }
    }
    return vp;
}

int main()
{
    int n = 5;
    vector<vector<int>> vp = generate(5);
    for (auto val : vp)
    {
        for (auto val1 : val)
            cout << val1 << " ";
        cout << endl;
    }
    return 0;
}