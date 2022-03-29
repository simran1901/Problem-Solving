// Codeforces
// https://codeforces.com/contest/1658/problem/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        bool first = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && !first)
            {
                first = true;
            }
            else if (s[i] == '1' && first)
            {
                count++;
            }
            else if (s[i] == '0')
            {
                if (count < 2)
                    ans += (2 - count);
                count = 0;
            }
        }
        cout << ans << "\n";
    }
}