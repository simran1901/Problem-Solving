// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1367/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<int>>
#define v vector<int>
#define cy cout << "YES\n";
#define cn cout << "NO\n";

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int res = 0;

    for (int i = 0; i < n;)
    {
        int j = i + 1;

        while (j < n && s[j] != '1')
            j++;

        int left = s[i] == '1' ? k : 0;
        int right = j < n && s[j] == '1' ? k : 0;
        int len = j - i;

        if (left == k)
        {
            len--;
        }

        len -= left + right;

        if (len > 0)
        {
            res += (len + k) / (k + 1);
        }

        i = j;
    }

    cout << res << endl;
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