// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/478/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

ll nCr(ll n)
{
    if (n == 1)
        return 0;
    ll ans = n * (n - 1) / 2;
    return ans;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    ll kMin = 0;
    ll kMax = nCr(n - (m - 1));
    // for min
    if (n % m)
    {
        kMin = n % m * nCr(ceil((double)n / m)) + nCr(n / m) * (m - n % m);
    }
    else
    {
        kMin = nCr(n / m) * m;
    }
    cout << kMin << " " << kMax << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}