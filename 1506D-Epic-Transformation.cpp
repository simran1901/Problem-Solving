// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1506/D

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
    ll n;
    cin >> n;
    map<ll, ll> count;
    ll x;
    rep(i, n)
    {
        cin >> x;
        count[x]++;
    }
    priority_queue<pair<ll, ll>> pq;
    for (auto [a, b] : count)
    {
        pq.push(make_pair(b, a));
    }

    ll size = n;

    while (pq.size() > 1)
    {
        pair<ll, ll> el1 = pq.top();
        pq.pop();
        pair<ll, ll> el2 = pq.top();
        pq.pop();
        el1.first--;
        el2.first--;
        size -= 2;
        if (el1.first > 0)
        {
            pq.push(el1);
        }
        if (el2.first > 0)
        {
            pq.push(el2);
        }
    }
    cout << size << '\n';
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