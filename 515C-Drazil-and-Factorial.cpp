// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/515/problem/C

#include <bits/stdc++.h>
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
    vector<string> ans({"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"});
    int n;
    cin >> n;
    string str;
    cin >> str;
    string res = "";
    rep(i, n)
    {
        res += ans[str[i] - '0'];
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}