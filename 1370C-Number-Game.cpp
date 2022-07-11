// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1370/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

bool check_prime(int n)
{
    for (int i = 2; i < min(50000, n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void solve()
{
    ll n;
    cin >> n;
    bool lose = (n == 1);
    if (n > 2 && n % 2 == 0)
    {
        if ((n & (n - 1)) == 0)
            lose = 1;
        else if (n % 4 != 0 && check_prime(n / 2))
            lose = 1;
    }
    if (lose)
        cout << "FastestFinger\n";
    else
        cout << "Ashishgup\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}