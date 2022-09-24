// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/E

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

bool isPal(string s)
{
    if (s[0] == s[4] && s[1] == s[3])
        return true;
    return false;
}

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    rep(i, n) cin >> arr[i];
    unordered_map<int, int> mp;

    mp[0] = -1;
    int target = 0;
    int len = 0;
    int end = -1;

    for (int i = 0; i < n; i++)
    {
        target += arr[i];

        if (mp.find(target) == mp.end())
        {
            mp[target] = i;
        }

        if (mp.find(target - s) != mp.end() && len < i - mp[target - s])
        {
            len = i - mp[target - s];
            end = i;
        }
    }
    if (end == -1)
    {
        cout << -1 << '\n';
    }
    else
        cout << n - len << '\n';
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
