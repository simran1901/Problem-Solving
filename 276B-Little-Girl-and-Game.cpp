// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/276/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<int>>
#define v vector<int>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    v arr(26, 0);
    rep(i, s.length())
    {
        arr[s[i] - 'a']++;
    }
    int odds = 0;
    rep(i, 26)
    {
        if (arr[i] % 2)
            odds++;
    }
    if (odds == 0 || odds % 2)
        cout << "First\n";
    else
        cout << "Second\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}