// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> aToB;
    unordered_map<string, string> bToA;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        aToB.insert(pair<string, string>(a, b));
        bToA.insert(pair<string, string>(b, a));
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (aToB.find(s) != aToB.end())
        {
            if (s.length() > aToB[s].length())
            {
                cout << aToB[s] << " ";
            }
            else
            {
                cout << s << " ";
            }
        }
        else
        {
            if (s.length() >= bToA[s].length())
            {
                cout << bToA[s] << " ";
            }
            else
            {
                cout << s << " ";
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}