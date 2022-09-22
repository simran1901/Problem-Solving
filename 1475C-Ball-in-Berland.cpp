// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1475/C

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

int dfs(vv &boysTree, vv &girlsTree, bool isBoy, int index, vector<bool> &boyVisited, vector<bool> &girlVisited)
{
    ll sum = 0;
    if (isBoy)
    {
        if (boyVisited[index])
            return sum;
        else
            boyVisited[index] = true;
        cout << "boys -> " << index << endl;
        ll size = boysTree[index].size();
        rep(i, size)
        {
            sum += dfs(boysTree, girlsTree, !isBoy, boysTree[index][i], boyVisited, girlVisited);
        }
    }
    else
    {
        if (girlVisited[index])
            return sum;
        else
            girlVisited[index] = true;
        cout << "girls -> " << index << endl;
        ll size = girlsTree[index].size();
        rep(i, size)
        {
            sum += dfs(boysTree, girlsTree, !isBoy, girlsTree[index][i], boyVisited, girlVisited);
        }
    }
    return sum + 1;
}

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    v arr(a,0);
    v brr(b,0);
    vector<pair<ll, ll>> edges(k);
    rep(i, k)
    {
        cin >> edges[i].first;
        edges[i].first--;
        arr[edges[i].first]++;
    }
    rep(i, k)
    {
        cin >> edges[i].second;
        edges[i].second--;
        brr[edges[i].second]++;
    }

    ll ans = 0;
    rep(i, k)
    {
        ans += k - arr[edges[i].first] - brr[edges[i].second] + 1;
    }
    cout << ans / 2 << "\n";
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