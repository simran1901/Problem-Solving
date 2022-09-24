// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1714/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, h, m;
    cin >> n >> h >> m;
    int time = INT_MAX;

    while (n--)
    {
        int hh, mm;
        cin >> hh >> mm;
        int diff;
        if (hh > h || (hh == h && mm >= m))
        {
            diff = (hh - h) * 60 + mm - m;
                }
        else
        {
            diff = (24 - h) * 60 - m + hh * 60 + mm;
        }
        time = min(diff, time);
    }
    cout << time / 60 << " " << time % 60 << '\n';
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