// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1374/C

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            count++;
        else if (s[i] == ')')
        {
            if (count == 0)
                ans++;
            else
                count--;
        }
    }
    cout << count << "\n";
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