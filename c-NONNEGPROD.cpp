// Codechef
// Author: simimakhijani
// https://www.codechef.com/submit/NONNEGPROD

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
    int count = 0;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++) {
        if (arr[i]==0) {
            cout<<0<<endl;
            return;
        }
        else if (arr[i]<0) count++;
    }
    int ans = count%2;
    cout<<ans<<'\n';
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