// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    // ll n;
    // cin >> n;
    // string s;
    // vector<vector<int>> grid(n, vector<int>(n));
    // rep(i, n)
    // {
    //     cin >> s;
    //     rep(j, n)
    //     {
    //         grid[i][j] = s[j] - '0';
    //     }
    // }
    // ll ans = 0;
    // ll count = 0;
    // rep(i, n / 2)
    // {
    //     for (ll j = i; j < n - i; j++)
    //     {
    //         // // top and right
    //         count = 0;
    //         if (grid[i][j] == 0)
    //             count++;
    //         if (grid[j][n - i - 1] == 0)
    //             count++;
    //         if (grid[n - i - 1][n - j - 1] == 0)
    //             count++;
    //         if (grid[n - j - 1][i] == 0)
    //             count++;
    //         ans += min(count, 4 - count);
    //     }
    // }
    // cout << ans << '\n';

    ll n;
    cin >> n;
    ll temp;
    // vector<pair<ll, ll>> vec(n);
    vector<ll> vec2(n);
    ll in = 0;
    v vec1(n);
    rep(i, n)
    {
        cin >> temp;
        // temp--;
        if (temp <= i)
        {
            vec1[in] = temp;
            vec2[in++] = i;
            // vec[in++] = pair<ll, ll>(temp, i);
        }
    }
    vec1.resize(in);
    vec2.resize(in);
    ll ans = 0;
    // sort(vec.begin(), vec.end(), [](pair<ll, ll> p1, pair<ll, ll> p2)
    //      { return p1.first > p2.first; });
    sort(vec1.begin(), vec1.end());

    rep(i, in)
    {
        auto it = lower_bound(vec1.begin(), vec1.end(), vec2[i]);
        if (it != vec1.end())
        {
            ans += n - (it - vec1.begin());
        }
    }
    cout << ans << '\n';
}

int main()
{
    IOS;
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}