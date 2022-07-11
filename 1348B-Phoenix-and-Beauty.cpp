// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1348/problem/B

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
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    // if more than k distinct numbers, print -1
    if (s.size() > k)
    {
        cout << -1 << endl;
        return;
    }
    cout << n * k << endl;
    for (int i = 0; i < n; i++)
    {
        // print the distinct numbers
        for (int b : s)
            cout << b << ' ';
        // print the extra 1s
        for (int j = 0; j < k - (int)s.size(); j++)
            cout << 1 << ' ';
    }
    cout << endl;
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