// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define MAX 1000000

using namespace std;

void solve()
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (ll i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                prime[j] = false;
            }
        }
    }
    set<ll> nums;
    for (ll i = 2; i < MAX; i++)
    {
        if (prime[i])
        {
            nums.insert(1ll * i * i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (nums.find(n) != nums.end())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}