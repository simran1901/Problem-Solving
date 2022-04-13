// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1359/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int cards = n / k;
    if (m / cards == 0)
        cout << m << "\n";
    else
    {
        // remaining jokers = m-cards
        // remaining players = k-1
        // total jokers in every player = m-cards/k-1
        //  if m-cards%k-1 != 0, increment maxjokers
        int maxJokers = (m - cards) / (k - 1);
        if ((m - cards) % (k - 1) != 0)
            maxJokers++;
        cout << cards - maxJokers << "\n";
    }
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