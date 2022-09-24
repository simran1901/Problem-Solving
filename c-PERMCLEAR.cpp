// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/PERMCLEAR

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

bool b[100005];

void solve()
{
    int n;
    cin>>n;
    v arr(n);
    inpArr(arr,n-1);
    int k;
    cin>>k;
    rep(i, n) b[i] = false;
    
    int ptr = 0;
    
    int temp;
    rep(i, k-1) {
        cin>>temp;
        b[temp] = true;
    }
    rep(i, n-1) {
        if (!b[arr[i]]) {
            cout<<arr[i]<<' ';
            ptr++;
        }
    }
    cout<<'\n';
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