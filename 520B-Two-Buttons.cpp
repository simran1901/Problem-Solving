// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/520/B

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
    int n, m;
    cin >> n >> m;
    int ans=0;
    while (n != m)
    {
        if (m > n)
            if (m % 2 == 0)
                m /= 2, ans++;
            else
                m++, ans++;
        else if (n > m)
            m++, ans++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
