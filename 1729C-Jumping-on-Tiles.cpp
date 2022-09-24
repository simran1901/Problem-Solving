// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1729/problem/C

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i <= n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) \
    repn(i, m, n)         \
            cin >>        \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    vector<pair<ll, ll>> arr(n);
    rep(i, n - 1)
    {
        arr[i].first = s[i] - 'a' + 1;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());

    ll startElement = s[0] - 'a' + 1;
    ll endElement = s[n - 1] - 'a' + 1;
    ll start = 0;
    ll end = 0;
    ll moves = 0, count = 0;
    vl ans;

    if (startElement > endElement)
    {
        // go left

        // get start index
        per(i, n - 1)
        {
            if (arr[i].first == startElement)
            {
                start = i;
                break;
            }
        }
        // get end index
        rep(i, n - 1)
        {
            if (arr[i].first == endElement)
            {
                end = i;
                break;
            }
        }
        moves = start - end + 1;
        ans.assign(moves, 0);
        ll ptr = 0;
        ans[ptr++] = 1;
        pern(i, start, end)
        {
            if (!(arr[i].second == n - 1 || arr[i].second == 0))
            {
                ans[ptr++] = arr[i].second + 1;
                count += s[ans[ptr - 2] - 1] - s[ans[ptr - 1] - 1];
            }
        }
        ans[ptr++] = n;
        count += s[ans[ptr - 2] - 1] - s[ans[ptr - 1] - 1];
    }
    else
    {
        // go right

        // get start index
        rep(i, n - 1)
        {
            if (arr[i].first == startElement)
            {
                start = i;
                break;
            }
        }
        // get end index
        per(i, n - 1)
        {
            if (arr[i].first == endElement)
            {
                end = i;
                break;
            }
        }

        moves = end - start + 1;
        ans.assign(moves, 0);
        ll ptr = 0;
        ans[ptr++] = 1;
        repn(i, start, end)
        {
            if (!(arr[i].second == n - 1 || arr[i].second == 0))
            {
                ans[ptr++] = arr[i].second + 1;
                count += s[ans[ptr - 1] - 1] - s[ans[ptr - 2] - 1];
            }
        }
        ans[ptr++] = n;
        count += s[ans[ptr - 1] - 1] - s[ans[ptr - 2] - 1];
    }

    // edge case add duplicates also

    cout << count << ' ' << moves << '\n';
    rep(i, moves - 1) cout << ans[i] << ' ';
    cout << '\n';
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}