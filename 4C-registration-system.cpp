// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

unordered_map<string, int> database;

void solve()
{
    string s;
    cin >> s;
    if (database.find(s) != database.end())
    {
        cout << s << database[s] << "\n";
        database[s]++;
    }
    else
    {
        cout << "OK\n";
        database[s] = 1;
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