// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/contest/1659/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll times = k;
    string s;
    cin >> s;
    string str = s;
    vector<int> matrix(n);
    int count = 0;
    for (int i = 0; i < n && k > 0; ++i)
    {
        s[i] ^= count;
        if (k % 2 != s[i] - '0' || i == n - 1)
            continue;
        matrix[i]++;
        k--;
        count ^= 1;
    }
    matrix.back() += k;
    for (int i = 0; i < n; ++i)
    {
        if ((times - matrix[i]) % 2)
        {
            str[i] ^= 1;
        }
    }
    cout << str << "\n";
    for (int i = 0; i < matrix.size(); i++)
        cout << matrix[i] << " ";
    cout << "\n";
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