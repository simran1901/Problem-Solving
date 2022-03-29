// Codeforces
// https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    for (char ch : str)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}