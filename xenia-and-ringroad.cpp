// Codeforces
// https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    int curr = 1;
    ll ans = 0;
    while (m--)
    {
        int temp;
        cin >> temp;
        if (temp >= curr)
        {
            ans += temp - curr;
        }
        else
        {
            ans += temp + n - curr;
        }
        curr = temp;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}