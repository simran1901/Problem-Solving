// Google Kickstart 2022 - Round F
// Author: simimakhijani
// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb409/0000000000beefbb

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
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<pair<string, int>> c(n);
    vector<pair<int,int>> d(n);
    vector<int> u(n);
    int temp;
    rep(i, n-1) {
        cin>>c[i].first>>d[i].first;
        cin>>temp;
        c[i].second = temp;
        d[i].second = temp;
    }
    
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    int ans = 0;
    rep(i, n-1) {
        if (d[i].second == c[i].second) {
            ans++;
        }
    }
    cout<<ans<<'\n';
}

int main()
{
    IOS;

    int t;
    cin >> t;
    repn(i, 1, t) {
        cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}