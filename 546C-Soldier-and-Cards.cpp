// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/546/C

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

void solve()
{
    int n;
    cin >> n;
    queue<int> q1;
    queue<int> q2;
    int k1, k2;
    cin >> k1;
    int temp;
    for (int i = 0; i < k1; i++)
    {
        cin >> temp;
        q1.push(temp);
    }

    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        cin >> temp;
        q2.push(temp);
    }
    int i;
    for (i = 0; i < 106 && !q1.empty() && !q2.empty(); i++)
    {
        int el1 = q1.front();
        q1.pop();

        int el2 = q2.front();
        q2.pop();

        if (el1 > el2)
        {
            q1.push(el2);
            q1.push(el1);
        }
        else
        {
            q2.push(el1);
            q2.push(el2);
        }
    }
    if (!q1.empty() && !q2.empty())
    {
        cout << -1 << '\n';
    }
    else if (!q1.empty())
    {
        cout << i << ' ' << 1 << '\n';
    }
    else
    {
        cout << i << ' ' << 2 << '\n';
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