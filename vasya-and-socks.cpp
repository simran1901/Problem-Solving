// Codeforces
// https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
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