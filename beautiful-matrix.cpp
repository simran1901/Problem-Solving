// Codeforces
// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    cout << (abs(r - 2) + abs(c - 2)) << "\n";
}