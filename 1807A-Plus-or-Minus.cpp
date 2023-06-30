// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1807/problem/A

#include "simran.h"

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
        cout << "+" << nl;
    else
        cout << "-" << nl;
}

int main()
{
    IOS;

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}