// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll odd = n % 2 ? n / 2 + 1 : n / 2;
    ll even = n / 2;
    if (k > odd)
    {
        k -= odd;
        cout << k * 2 << "\n";
    }
    else
    {
        cout << k * 2 - 1 << "\n";
    }
}