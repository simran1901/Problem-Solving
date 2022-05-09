// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1678/problem/0

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    set<int> sett;
    bool same = false;
    int nonZeroes = 0;
    rep(i, n)
    {
        cin >> arr[i];
        if (sett.find(arr[i]) != sett.end())
        {
            same = true;
        }
        sett.insert(arr[i]);
        if (arr[i] != 0)
            nonZeroes++;
    }
    if (nonZeroes < n)
        cout << nonZeroes << '\n';
    else if (same)
        cout << n << '\n';
    else
        cout << n + 1 << '\n';
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