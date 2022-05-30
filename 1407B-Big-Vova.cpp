// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1407/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    // find max
    // iterate array and find element with greatest gcd with current element
    int n;
    cin >> n;
    int a[n];
    int mi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mi = (a[i] > a[mi] ? i : mi);
    }
    vector<int> b(n);
    b[0] = a[mi];
    a[mi] = 0;
    int cg = b[0];
    for (int i = 1; i < n; i++)
    {
        int ci = 0, cans = 0;
        for (int j = 0; j < n; j++)
            if (a[j] && __gcd(a[j], cg) > cans)
            {
                cans = __gcd(a[j], cg);
                ci = j;
            }
        b[i] = a[ci];
        cg = cans;
        a[ci] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';
    cout << '\n';
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