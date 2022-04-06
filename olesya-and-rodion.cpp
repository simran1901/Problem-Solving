// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/584/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, t, count=1;
    cin >> n >> t;

    if (n == 1 and t == 10)
        cout << -1 << endl;
    else
    {
        cout << t;
        if (t == 10)
            count++;
        for (; count < n; count++)
            cout << '0';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}