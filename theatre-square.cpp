// Codeforces
// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll nc = ceil(n / (double)a);
    ll mc = ceil(m / (double)a);
    cout << (nc * mc);
}