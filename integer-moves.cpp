// Codeforces
// https://codeforces.com/contest/1657/problem/0

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
            cout << 0;
        else
        {
            int finalX = x * x, finalY = y * y;
            int t = sqrt(finalX + finalY);
            if (t * t == finalX + finalY)
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        cout << "\n";
    }
}