// Codeforces
// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int x = 0;

    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << "\n";
}