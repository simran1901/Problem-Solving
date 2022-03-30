// Codeforces
// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            n /= 10;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0)
        cout << "YES";
    else
    {
        if (isLucky(n))
            cout << "YES";
        else
            cout << "NO";
    }
}

// 4, 7, 47, 74