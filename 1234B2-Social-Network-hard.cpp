// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1234/B2

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
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    unordered_map<ll, bool> displayed;
    rep(i, n)
    {
        cin >> arr[i];
        displayed[arr[i]] = false;
    }

    queue<ll> q;
    ll s;
    rep(i, n)
    {
        if (displayed[arr[i]] == false)
        {
            s = q.size();
            if (s == k)
            {
                displayed[q.front()] = false;
                q.pop();
                q.push(arr[i]);
                displayed[arr[i]] = true;
            }
            else if (s < k)
            {
                q.push(arr[i]);
                displayed[arr[i]] = true;
            }
        }
    }
    stack<ll> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    cout << st.size() << '\n';
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}