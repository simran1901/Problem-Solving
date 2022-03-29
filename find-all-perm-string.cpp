// Cracking the Coding Interview - Technical Questions

// Given a smaller strings and a bigger string b,
// design an algorithm to find all permutations of the
// shorter string within the longer one.
// Print the location of each permutation.

// leetcode - https://leetcode.com/problems/find-all-anagrams-in-a-string/

#include <bits/stdc++.h>
using namespace std;

int arr[26] = {0};
bool checkAnagram()
{
    for (int i : arr)
    {
        if (i != 0)
            return false;
    }
    return true;
}
vector<int> findAnagrams(string s, string p)
{
    int k = p.length();

    // iterate through string p storing char count
    for (char ch : p)
    {
        arr[ch - 'a']++;
    }

    vector<int> ans;
    int windowStart = 0;

    // iterate through string s with window of size k
    for (int windowEnd = 0; windowStart + k - 1 < s.length(); windowEnd++)
    {
        arr[s[windowEnd] - 'a']--;

        // if window size is achieved
        if (windowEnd >= k - 1)
        {
            if (checkAnagram())
            {
                ans.push_back(windowStart);
            }

            // move the window one step forward
            arr[s[windowStart] - 'a']++;
            windowStart++;
        }
    }
    return ans;
}

int main()
{
    string s, p;
    cin >> s >> p;
    vector<int> result = findAnagrams(s, p);
    for (int i : result)
        cout << i << " ";

    cout << endl;
}