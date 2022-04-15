// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1326/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << -1 << "\n";
    else
    {
        cout << 5;
        for (int i = 1; i < n; i++)
        {
            cout << 7;
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}