// Codeforces
// Author: simranmakhijani55
// https://codeforces.com/problemset/problem/43/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string teamA, teamB = "";
    int countA = 0, countB = 0;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        if (i == 0)
            teamA = name;
        if (name == teamA)
            countA++;
        else
        {
            if (teamB == "")
                teamB = name;
            countB++;
        }
    }
    if (countA > countB)
        cout << teamA;
    else
        cout << teamB;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}