// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1659/problem/0

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;
    int parts = ceil(r / (double)(b + 1));
    int rem = (b + 1) * parts - r;
    for (int i = 1; i <= b + 1; i++)
    {
        int end = parts;
        if (i <= rem)
            end = parts - 1;
        for (int j = 0; j < end; j++)
        {
            cout << "R";
        }
        if (i != b + 1)
            cout << "B";
    }
    cout << "\n";
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