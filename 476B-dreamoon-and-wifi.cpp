// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/476/B

#include <bits/stdc++.h>
#define ll long long int
#define repn(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) repn(i, 0, n)

using namespace std;

void solve()
{
    string s, t;
    cin >> s;
    cin >> t;
    int n = s.length();

    int answerPosition = 0;
    for (int i = 0; i < n; i++)
        answerPosition += (s[i] == '+' ? 1 : -1);

    int finalPosition = 0;
    int moves = 0; // number of '?'
    for (int i = 0; i < n; i++)
    {
        if (t[i] == '?')
            moves++;
        else
            finalPosition += (t[i] == '+' ? 1 : -1);
    }

    int distance = answerPosition - finalPosition;
    double answer;
    if ((distance + moves) % 2 != 0 || moves < abs(distance))
        answer = 0;
    else
    {
        int m = (moves + abs(distance)) / 2; 
        // C(moves,m)/(1<<moves)
        int c = 1;
        for (int i = 0; i < m; i++)
            c *= moves - i;
        for (int i = 2; i <= m; i++)
            c /= i;
        answer = (double)c / (1 << moves);
    }

    printf("%.12f\n", answer);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}