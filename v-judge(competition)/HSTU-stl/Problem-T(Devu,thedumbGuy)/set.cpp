#include <iostream>
#include <set>
#define ll long long
using namespace std;
int main()
{
    ll n, t;
    cin >> n >> t;
    multiset<ll> s;
    while (n--)
    {
        ll val;
        cin >> val;
        s.insert(val);
    }

    ll total = 0;

    for (auto val : s)
    {

        if (t == 1)
            total += t * val;
        else
        {
            total += t * val;
            t--;
        }
    }
    cout << total << endl;

    return 0;
}
