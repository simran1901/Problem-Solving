// Codeforces
// Author: simranmakhijani55
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int count = 1;
    char temp = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == temp)
            count++;
        else
        {
            if (count < 2)
            {
                cout << "NO\n";
                return;
            }
            count = 1;
            temp = s[i];
        }
    }
    if (count < 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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