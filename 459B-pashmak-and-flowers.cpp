// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/459/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll temp;
    ll minNum = INT_MAX;
    ll maxNum = -1;
    ll minCount = 0, maxCount = 0;
    rep(i, n)
    {
        cin >> temp;
        if (temp < minNum)
        {
            minNum = temp;
            minCount = 1;
        }
        else if (temp == minNum)
        {
            minCount++;
        }
        if (temp > maxNum)
        {
            maxNum = temp;
            maxCount = 1;
        }
        else if (temp == maxNum)
        {
            maxCount++;
        }
    }
    ll ans = maxCount * minCount;
    if (maxNum == minNum)
    {
        ans = (n * (n - 1)) / 2;
    }
    cout << maxNum - minNum << " " << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}