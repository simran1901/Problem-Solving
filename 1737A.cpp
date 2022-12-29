// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1737/problem/A

#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define pern(i, m, n) for (ll i = m; i >= n; i--)
#define per(i, n) pern(i, n, 0)
#define vl vector<ll>
#define vvl vector<vl>
#define v vector<int>
#define vv vector<v>
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl '\n'

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> count;
    string ans = "";

    rep(i, s.length())
    {
        count[s[i]]++;
    }
    auto it = count.find((char)(n / k + 97));
    count.erase(it, count.end());

    repn(i, 1, k + 1)
    {
        for (char ch = 'a'; ch <= 'z'; ch = char(ch + 1))
        {
            if (count[ch] <= 0)
            {
                ans += ch;
                break;
            }
            else
            {
                count[ch]--;
                continue;
            }
        }
    }
    cout << ans << nl;
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