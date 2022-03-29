// Codeforces
// https://codeforces.com/problemset/problem/1343/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll k = 2;
    ll limit = log(n + 1) / log(2);
    while (k <= limit)
    {
        ll p = pow(2, k);
        if (n % (ll)(p - 1) == 0)
        {
            cout << n / (ll)(p - 1) << "\n";
            break;
        }
        k++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}