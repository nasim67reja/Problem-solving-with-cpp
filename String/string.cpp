#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1108. Defanging an IP Address

string defangIPaddr(string address)
{
    string str = "";
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
            str += "[.]";
        else
            str += address[i];
    }
    return str;
}

int main()

{
    cout << defangIPaddr("1.1.1.1");
    return 0;
}