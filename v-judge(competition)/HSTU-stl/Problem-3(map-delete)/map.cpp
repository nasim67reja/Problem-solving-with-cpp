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
            int val;
            cin >> val;
            m[k] = val;
        }
        else if (c == 1)
            cout << m[k] << endl;
        else if (c == 2)
            m.erase(k);
    }
    return 0;
}