// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1490/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int c0 = 0, c1 = 0, c2 = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 3 == 0)
            c0++;
        else if (temp % 3 == 1)
            c1++;
        else if (temp % 3 == 2)
            c2++;
    }

    int res = 0;
    while (c0 != c1 || c0 != c2 || c1 != c2)
    {
        res++;
        if (c0 >= c1 && c0 >= c2)
            c0--, c1++;
        else if (c1 >= c0 && c1 >= c2)
            c1--, c2++;
        else if (c2 >= c0 && c2 >= c1)
            c2--, c0++;
    }

    cout << res << "\n";
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