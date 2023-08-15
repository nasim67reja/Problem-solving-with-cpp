#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x)
{
    int t = x;
    long r = 0;
    while (x)
    {
        r = (r * 10) + x % 10;
        x = x / 10;
    }
    if (r > INT_MAX || r < INT_MIN)
        return 0;
    return int(r) == t;
}

int main()
{

    int n;
    cin >> n;

    cout << isPalindrome(n);

    return 0;
}