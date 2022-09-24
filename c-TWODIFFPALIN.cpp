// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/TWODIFFPALIN

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
    ll a,b;
    cin>>a>>b;
    if (a%2 == 1 && b%2 == 1) cn;
    else if (a%2==0 && b%2==0) cy;
    else {
        // ek odd or ek even
        if (a%2==1) {
            if (a-1>=2 && b>=2) cy;
            else cn;
        } else {
            if (b-1>=2 && a>=2) cy;
            else cn;
        }
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