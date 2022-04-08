// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/742/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return;
    }
    switch (n % 4)
    {
    case 1:
        cout << 8;
        break;
    case 2:
        cout << 4;
        break;
    case 3:
        cout << 2;
        break;
    case 0:
        cout << 6;
        break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}