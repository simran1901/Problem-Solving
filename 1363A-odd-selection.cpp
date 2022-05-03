// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int temp;
    int odd = 0;
    rep(i, n)
    {
        cin >> temp;
        if (temp % 2)
            odd++;
    }
    if (odd == 0)
    {
        cout << "No\n";
        return;
    }

    if (odd >= x)
    {
        if (x & 1)
            cout << "Yes\n";
        else
            cout << ((n - odd == 0) ? "No\n" : "Yes\n");
    }
    else
    {
        x -= odd;

        if (odd % 2 == 0)
            ++x;

        cout << ((n - odd >= x) ? "Yes\n" : "No\n");
    }
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