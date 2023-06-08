#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<string> fizzBuzz(int n)
{
    vector<string> vos;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            vos.push_back("FizzBuzz");
        else if (i % 3 == 0)
            vos.push_back("Fizz");
        else if (i % 5 == 0)
            vos.push_back("Buzz");
        else
            vos.push_back(to_string(i));
    }
    return vos;
}

int main()
{
    int n = 5;
    vector<string> v = fizzBuzz(n);
    for (auto val : v)
        cout << val << " ";
    return 0;
}