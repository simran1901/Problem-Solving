// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    ll prefix[n];
    // prefix[0] = s[0] == '+' ? 1 : -1;
    ll toFind = -1;
    ll toAdd;
    ll res = n;
    rep(i, n)
    {
        toAdd = s[i] == '+' ? 1 : -1;
        if (i > 0)
            prefix[i] = prefix[i - 1] + toAdd;
        else
            prefix[i] = toAdd;

        if (prefix[i] == toFind)
        {
            res += i + 1;
            toFind--;
        }
    }

    cout << res << '\n';
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