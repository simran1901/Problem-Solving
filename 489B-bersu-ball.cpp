// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    int boys[n];

    rep(i, n) cin >> boys[i];
    sort(boys, boys + n);

    cin >> m;
    int girls[m];
    rep(i, m) cin >> girls[i];
    sort(girls, girls + m);

    int b = 0, g = 0;
    // if (abs(girls[m-1]-boys[0]) > 1)
    int count = 0;
    while (b < n && g < m)
    {
        if (abs(boys[b] - girls[g]) <= 1)
        {
            count++;
            b++;
            g++;
        }
        else
        {
            if (boys[b] < girls[g])
            {
                b++;
            }
            else
            {
                g++;
            }
        }
    }
    cout << count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}