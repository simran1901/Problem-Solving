// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1714/problem/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, n)
    {
        cin >> arr[i];
    }

    map<int,bool> mapp;

    for (int i = n - 1; i >= 0; i--)
    {
        if (mapp[arr[i]] == false)
        {
            mapp[arr[i]] = true;
        }
        else
        {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}