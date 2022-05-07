// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1670/problem/B

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
    int k;
    cin >> k;
    set<char> arrK;
    rep(i, k)
    {
        char temp;
        cin >> temp;
        arrK.insert(temp);
    }
    int prev = 0;
    int ans = 0;
    int i = 0;
    int count = 0;
    while (i < n)
    {
        if (arrK.find(s[i]) != arrK.end())
        {
            ans = max(ans, i - prev);
            // cout << prev << "hello ";

            while (arrK.find(s[i]) != arrK.end() && i < n)
            {
                prev = i;
                i++;
            }
        }
        else
        {
            while (arrK.find(s[i]) == arrK.end() && i < n)
            {
                i++;
            }
        }
    }
    int j = 0;
    while (arrK.find(s[j]) != arrK.end())
    {
        count++;
        if (count > 1)
        {
            ans = max(ans, 1);
        }
        j++;
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