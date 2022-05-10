// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1328/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll count = 0;
    ll i = 0;
    while (true)
    {
        count++;
        if (k >= i && k <= i + count)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (j == n - count || j == n - (k - i - 1))
                {
                    cout << 'b';
                }
                else
                {
                    cout << 'a';
                }
            }
            cout << "\n";
            return;
        }
        i += count;
    }
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