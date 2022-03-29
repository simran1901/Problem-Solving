// This question was asked in Juspay round 3 for front end dev

// rotate a matrix by a given angle which is divisible by 90

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int angle;
    cin >> angle;
    angle = (angle % 360 + 360) % 360;

    if (angle == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
                if (j < m - 1)
                    cout << " ";
            }
            if (i < n - 1)
                cout << endl;
        }
    }
    else
    {
        int row = n, col = m;
        if (angle == 90 || angle == 270)
            swap(row, col);
        char ans[row][col];

        if (angle == 90)
        {
            for (int i = m - 1, r = 0; i >= 0, r < m; i--, r++)
            {
                for (int j = 0, c = 0; j < n, c < n; j++, c++)
                {
                    ans[r][c] = mat[j][i];
                }
            }
        }
        else if (angle == 270)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    ans[i][j] = mat[j][i];
                }
            }
        }
        else if (angle == 180)
        {
            for (int i = n - 1, r = 0; i >= 0, r < n; i--, r++)
            {
                for (int j = m - 1, c = 0; j >= 0, c < m; j--, c++)
                {
                    ans[r][c] = mat[i][j];
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << ans[i][j];
                if (j < col - 1)
                    cout << " ";
            }
            if (i < row - 1)
                cout << endl;
        }
    }
}