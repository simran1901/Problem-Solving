// Cracking the Coding Interview - Technical Questions
// Author: simranmakhijani55

// Print all positive integer solutions to the equation a3 + b3 = c3 + d3
// where a, b, c and d are integers between 1 and 1000.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1000; // as given

    // create array for storing pairs
    unordered_map<int, vector<vector<int>>> mmap;
    // find pairs of c and d and store in map - array
    for (int c = 1; c <= n; c++)
    {
        for (int d = 1; d <= n; d++)
        {
            int result = pow(c, 3) + pow(d, 3);
            mmap[result].push_back(vector<int>({c, d}));
        }
    }

    for (auto it : mmap)
    {
        // print pairs in map arrays
        for (int i = 0; i < it.second.size(); i++)
        {
            for (int j = 0; j < it.second.size(); j++)
            {
                cout << it.second[i][0] << " " << it.second[i][1] << " " << it.second[j][0] << " " << it.second[j][1] << endl;
            }
        }
    }
}