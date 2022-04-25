// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/450/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int temp;
    int ansIndex = 0;
    int ansMax = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        int rem = temp % m;
        temp = temp / m;
        if (rem)
            temp++;
        if (ansMax <= temp)
        {
            ansMax = temp;
            ansIndex = i + 1;
        }
    }
    cout << ansIndex << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}