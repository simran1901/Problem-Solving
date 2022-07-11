// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1363/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define v vector<ll>
#define vv vector<v>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int leftIndex = -1, leftMax = 0;
    int rightIndex = n, rightMax = 0;
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (s[i] == '0')
                prefix[i] = prefix[i - 1] - 1;
            else
                prefix[i] = prefix[i - 1] + 1;
        }
        else
        {
            if (s[i] == '0')
                prefix[i] = -1;
            else
                prefix[i] = 1;
        }
        if (prefix[i] > leftMax)
        {
            leftMax = prefix[i];
            leftIndex = i;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i < n - 1)
        {
            if (s[i] == '0')
                prefix[i] = prefix[i + 1] - 1;
            else
                prefix[i] = prefix[i + 1] + 1;
        }
        else
        {
            if (s[i] == '0')
                prefix[i] = -1;
            else
                prefix[i] = 1;
        }

        if (prefix[i] > rightMax)
        {
            rightMax = prefix[i];
            rightIndex = i;
        }
    }

    // counting
    int leftCount = 0, rightCount = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        // count zeroes until leftIndex is encountered after that count 1s
        if ((i <= leftIndex && s[i] == '0') || (i > leftIndex && s[i] == '1'))
            leftCount++;
        if ((i >= rightIndex && s[i] == '0') || (i < rightIndex && s[i] == '1'))
            rightCount++;
        if (s[i] == '0')
            count++;
    }
    cout << min({leftCount, rightCount, count, n - count}) << '\n';
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