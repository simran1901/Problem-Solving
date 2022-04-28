// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n, l;
    cin >> n >> l;
    ll arr[n];
    double maxDiff = 0;
    rep(i, n)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    rep(i, n - 1)
    {
        double diff = arr[i + 1] - arr[i];
        if (diff > maxDiff)
            maxDiff = diff;
    }
    maxDiff = max(maxDiff / 2, max((double)(arr[0] - 0), (double)(l - arr[n - 1])));
    printf("%.10f", maxDiff);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}