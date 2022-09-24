// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/F

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

bool isPal(string s)
{
    if (s[0] == s[4] && s[1] == s[3])
        return true;
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> count(10, 0);
    int temp;
    rep(i, n)
    {
        cin >> temp;
        temp %= 10;
        count[temp]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            count[i]--;
            for (int j = 0; j < 10; j++)
            {
                if (count[j] > 0)
                {
                    count[j]--;
                    for (int k = 0; k < 10; k++)
                    {
                        if (count[k] > 0)
                        {
                            count[k]--;
                            if ((i + j + k) % 10 == 3)
                            {
                                cout << "YES\n";
                                return;
                            }
                            count[k]++;
                        }
                    }
                    count[j]++;
                }
            }
            count[i]++;
        }
    }

    cout << "NO\n";
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
