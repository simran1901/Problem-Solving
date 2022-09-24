// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1692/problem/H

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (ll i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)
#define vv vector<vector<ll>>
#define v vector<ll>
#define cy cout << "YES\n"
#define cn cout << "NO\n"

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll temp;
    ll a = 0;
    ll maxAVal = 0;
    ll arr[n];

    map<ll, ll> prevIndex;
    map<ll, ll> max_ending_here;
    map<ll, ll> max_so_far;
    map<ll, ll> start;
    ll maxStart = 0;
    ll maxEnd = 0;
    ll *prevPtr;
    ll *endPtr;
    ll *soPtr;
    ll *startPtr;

    rep(i, n)
    {
        cin >> arr[i];
        temp = arr[i];
        prevPtr = &prevIndex[temp];
        endPtr = &max_ending_here[temp];
        soPtr = &max_so_far[temp];
        startPtr = &start[temp];

        if (arr[*prevPtr] == temp && i > *prevPtr)
        {
            *endPtr = *endPtr - i + *prevPtr + 1;
        }
        if (*endPtr < 0)
        {
            *endPtr = 0;
        }

        if (*endPtr == 0)
            *startPtr = i;
        *endPtr = *endPtr + 1;

        if (*endPtr > *soPtr)
        {
            *soPtr = *endPtr;
            if (*soPtr > maxAVal)
            {
                maxStart = *startPtr;
                maxEnd = i;
            }
        }

        if (*soPtr > maxAVal)
        {
            maxAVal = *soPtr;
            a = temp;
        }
        *prevPtr = i;
    }

    cout << a << " " << ++maxStart << " " << ++maxEnd << endl;
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