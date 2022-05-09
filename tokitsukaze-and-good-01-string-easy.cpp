// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1678/problem/B1

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int prev = -1, ans = 0;
    int count = 1;
    // cout<<s;
    vector<int> arr;
    if (n == 2 && s[0] != s[1])
    {
        cout << 1 << "\n";
        return;
    }
    repn(i, 1, n)
    {
        if (s[i] == s[i - 1])
        {
            // cout<<s[i]<<" "<<s[i-1]<<' ';
            count++;
        }
        else
        {
            arr.push_back(count);
            count = 1;
        }
    }
    arr.push_back(count);

    rep(i, arr.size())
    {
        if (arr[i] % 2)
        {
            if (prev != -1)
            {
                ans += i - prev;
                prev = -1;
            }
            else
            {
                prev = i;
            }
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
        solve();

    return 0;
}