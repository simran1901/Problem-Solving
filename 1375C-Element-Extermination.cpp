// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1375/C

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
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, n)
    {
        cin >> arr[i];
        // agr iska agla isse km hai ya ye last element hai agr vo max hmare min se chota hai to continue
    }
    if (arr[0] < arr[n - 1])
        cy;
    else
        cn;
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