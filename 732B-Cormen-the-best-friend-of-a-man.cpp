// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/732/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    rep(i, n)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << "\n"
             << arr[0];
        return;
    }
    int ans = 0;
    repn(i, 1, n)
    {
        int temp = m - (arr[i] + arr[i - 1]);
        if (temp <= 0)
            continue;
        arr[i] += temp;
        ans += temp;
    }
    cout << ans << "\n";
    rep(i, n) cout << arr[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}