// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1660/problem/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int n = str.length();
    map<char, int> mapp;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        mapp[str[i]]++;
        if (mapp[str[i]] == 2)
        {
            ans -= 2;
            mapp.clear();
        }
    }
    cout << ans << "\n";
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