// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1294/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;
    for (ll i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            n /= i;
            if (ans.size() == 2)
            {
                ans.push_back(n);
                break;
            }
        }
    }
    if (ans.size() == 3)
    {
        cout << "YES\n";
        for (int i = 0; i < 3; i++)
            cout << ans[i] << " ";
        cout << '\n';
    }
    else
        cout << "NO\n";
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