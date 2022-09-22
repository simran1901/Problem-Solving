// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/514/B

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
    int n, x, y;
    cin >> n >> x >> y;
    set<pair<int, int>> slopes;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int dy = b - y;
        int dx = a - x;
        int g = __gcd(abs(dy), abs(dx));

        dy /= g;
        dx /= g;
        if (dx * dy < 0)
        {

            dx = abs(dx) * -1;
            dy = abs(dy);
        }
        else
        {
            dx = abs(dx);
            dy = abs(dy);
        }

        slopes.insert(make_pair(dx, dy));
    }

    cout << slopes.size() << '\n';
}

int main()
{
    IOS;

    solve();

    return 0;
}