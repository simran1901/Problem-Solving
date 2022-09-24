// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = 0;
    if(b>a) ans++;
    if (c>a) ans++;
    if (d>a) ans++;
    cout<<ans<<'\n';
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
