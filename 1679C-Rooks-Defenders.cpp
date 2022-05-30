// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1679/problem/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "Yes\n"
#define cn cout << "No\n"

using namespace std;

void solve()
{
    ll n, q;
    cin >> n;
    v rows(n, 0);
    v cols(n, 0);
    cin >> q;
    set<ll> freeRows;
    set<ll> freeCols;
    rep(i, n)
    {
        freeRows.insert(i);
        freeCols.insert(i);
    }
    rep(i, q)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll x, y;
            cin >> x >> y;
            x--, y--;

            rows[y]++;
            cols[x]++;
            if (rows[y] == 1)
                freeRows.erase(y);
            if (cols[x] == 1)
                freeCols.erase(x);
        }
        else if (t == 2)
        {
            ll x, y;
            cin >> x >> y;
            x--, y--;
            rows[y]--;
            cols[x]--;
            if (rows[y] == 0)
                freeRows.insert(y);
            if (cols[x] == 0)
                freeCols.insert(x);
        }
        else if (t == 3)
        {
            ll x1, x2, y1, y2;

            cin >> x1 >> y1 >> x2 >> y2;
            x1--, x2--, y1--, y2--;
            ll a = min(x1, x2), b = max(x1, x2), c = min(y1, y2), d = max(y1, y2);
            auto rowBound = freeRows.lower_bound(c);

            if (rowBound != freeRows.end() && *rowBound <= d)
            {
                auto colBound = freeCols.lower_bound(a);
                if (colBound != freeCols.end() && *colBound <= b)
                {
                    cn;
                }
                else
                    cy;
            }
            else
                cy;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while(t--)
    solve();

    return 0;
}