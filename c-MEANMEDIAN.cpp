// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/MEANMEDIAN

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
#define inpArr(arr, n) \
    rep(i, n)      \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    int a,b,c;
    b = y;
    a = -500;
    c = 3*x - b - a;
    cout<<a<<' '<<b<<' '<<c<<'\n';
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