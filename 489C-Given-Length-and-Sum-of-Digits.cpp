// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/489/C

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
    int m, s;
    cin >> m >> s;

    vector<int> ans(m, 0);
    vector<int> ans1(m, 0);
    if (s == 0 && m == 1)
    {
        cout << "0 0\n";
        return;
    }
    ans[0] = 1;
    ans1[0] = 1;
    s--;
    int s1 = s;

    int i = m - 1;
    int temp;
    while (s > 0 && i >= 0)
    {
        temp = min(9 - ans[i], s);
        ans[i] += temp;
        s -= temp;
        if (ans[i] < 9)
            break;
        i--;
    }
    if (i < 0)
        i = 0;
    if (s != 0)
        cout << -1 << " " << -1 << '\n';
    else
    {
        rep(j, m) cout << ans[j];
        cout << " ";
        ans[0]--;
        ans[i]++;
        for (int j = m - 1; j >= 0; j--)
            cout << ans[j];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
