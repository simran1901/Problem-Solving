// Codeforces
// https://codeforces.com/contest/1651/problem/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int ans = pow(2, n) - 1;
        cout << ans << "\n";
    }
}