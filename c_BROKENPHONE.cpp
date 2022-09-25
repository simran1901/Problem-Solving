// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/BROKENPHONE

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
    if (x==y) {
        cout<<"ANY\n";
    }
    else if (x>y) {
        cout<<"NEW PHONE\n";
    }
    else {
        cout<<"REPAIR\n";
    }
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