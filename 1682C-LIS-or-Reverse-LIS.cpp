// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1682/problem/C

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
    int n;
    cin >> n;

    int temp;
    std::map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (mapp[temp] < 2)
        {
            mapp[temp]++;
        }
    }

    int repeated = 0, nonRepeated = 0;
    for (auto [x, c] : mapp)
    {
        if (c == 2)
        {
            repeated++;
        }
        else
        {
            nonRepeated++;
        }
    }
    repeated += (nonRepeated + 1) / 2;
    std::cout << repeated << "\n";
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