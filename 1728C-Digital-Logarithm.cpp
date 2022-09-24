// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1728/problem/C

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
    rep(i, n)          \
            cin >>     \
        arr[i];
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mapA;
    map<ll, ll> mapB;
    ll temp;
    vl lengthsA(10, 0);
    vl lengthsB(10, 0);
    vl a(10, 0);
    vl b(10, 0);
    rep(i, n - 1)
    {
        cin >> temp;
        mapA[temp]++;
    }

    rep(i, n - 1)
    {
        cin >> temp;
        if (mapA.find(temp) != mapA.end())
        {
            mapA[temp]--;
            if (mapA[temp] == 0)
            {
                mapA.erase(temp);
            }
        }
        else
            mapB[temp]++;
    }
    ll ans = 0;
    for (auto it : mapA)
    {
        if (it.first > 9)
        {
            a[to_string(it.first).length()] += it.second;
            ans += it.second;
        }
        else
        {
            a[it.first] += it.second;
        }
    }
    for (auto it : mapB)
    {
        if (it.first > 9)
        {
            b[to_string(it.first).length()] += it.second;
            ans += it.second;
        }
        else
        {
            b[it.first] += it.second;
        }
    }
    ll mi = 10;
    // agr koi same numbers ho
    repn(i, 1, 9)
    {
        mi = min(a[i], b[i]);
        a[i] -= mi;
        b[i] -= mi;
    }

    // saare distinct
    repn(i, 2, 9)
    {
        ans += a[i] + b[i];
    }
    cout << ans << endl;
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