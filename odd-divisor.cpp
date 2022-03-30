// Codeforces
// https://codeforces.com/problemset/problem/1475/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2)
    {
        cout << "YES\n";
    }
    else
    {
        while (n % 2 == 0 && n > 0)
        {
            n /= 2;
        }
        if (n > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}