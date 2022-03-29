// This question was asked in Juspay round 3 for front end dev

// check if the given number has exactly n divisors

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;

    while (t--)
    {
        int m;
        cin >> m;
        int count = 0;

        for (int i = 1; i <= sqrt(m); i++)
        {
            if (m % i == 0)
            {
                count += 2;
                if (m / i == i)
                    count--;
            }
            if (count > n)
                break;
        }
        if (count == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}