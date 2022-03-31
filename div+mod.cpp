// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1650/b

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r, a;
        cin >> l >> r >> a;
        // there are three candidates r, l, and r/a * a - 1
        ll ans = r / a + r % a;
        ll c = (r / a) * a - 1;
        if (c >= l)
            ans = max(ans, c / a + c % a);
        ans = max(ans, l / a + l % a);
        cout << ans << "\n";
    }
}