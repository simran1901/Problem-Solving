// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    int days = 0;
    while (n > 0)
    {
        if (n < m)
        {
            days += n;
            break;
        }
        else
        {
            days += (n / m) * m;
            n = n % m + n / m;
        }
    }
    cout << days;
}