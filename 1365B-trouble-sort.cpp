// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1365/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int ones = 0, zeroes = 0;
    bool sorted = true;
    rep(i, n)
    {
        cin >> a[i];
        if (i > 0)
            if (a[i] < a[i - 1])
            {
                sorted = false;
            }
    }
    rep(i, n)
    {
        cin >> b[i];
        if (b[i] == 1)
            ones++;
        else
            zeroes++;
    }

    if (sorted || (ones > 0 && zeroes > 0))
        cout << "Yes\n";
    else
        cout << "No\n";
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