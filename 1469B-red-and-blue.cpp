// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1469/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    int maxRed = 0, maxBlue = 0;
    int sumRed = 0, sumBlue = 0;
    rep(i, n)
    {
        int temp;
        cin >> temp;
        sumRed += temp;
        if (sumRed > maxRed)
            maxRed = sumRed;
    }
    cin >> m;
    rep(i, m)
    {
        int temp;
        cin >> temp;
        sumBlue += temp;
        if (sumBlue > maxBlue)
            maxBlue = sumBlue;
    }
    cout << maxRed + maxBlue << "\n";
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