// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1393/B

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
#define inpArr(arr, m, n) repn(i, m, n) cin >> arr[i];
#define printArr(arr, m, n) repn(i, m, n) cout << arr[i] << ' ';
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

ll n, q;
vl arr(100001);
void solve()
{
    cin >> n;
    map<ll, ll> mapp;
    map<ll, ll> map1;
    rep(i, n - 1)
    {
        cin >> arr[i];
        mapp[arr[i]]++;
    }

    for (auto it : mapp)
    {
        ll temp = it.second;
        map1[4] += temp / 4;
        temp %= 4;

        map1[2] += temp / 2;
        temp %= 2;

        map1[1] += temp;
    }

    cin >> q;
    rep(i, q - 1)
    {
        char op;
        cin >> op;
        ll num;
        cin >> num;

        ll temp = mapp[num];
        map1[4] -= temp / 4;
        temp %= 4;

        map1[2] -= temp / 2;
        temp %= 2;

        map1[1] -= temp;

        if (op == '+')
        {
            mapp[num]++;
        }
        else
        {
            mapp[num]--;
        }

        temp = mapp[num];
        map1[4] += temp / 4;
        temp %= 4;

        map1[2] += temp / 2;
        temp %= 2;

        map1[1] += temp;

        if (map1[4] > 0 && (map1[2] > 1 || map1[4] > 1))
        {
            cy;
        }
        else
        {
            cn;
        }
    }
}

int main()
{
    IOS;

    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}