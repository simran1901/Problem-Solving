// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m, a;
    cin >> n >> m >> a;
    ll nc = ceil(n / (double)a);
    ll mc = ceil(m / (double)a);
    cout << (nc * mc);
}