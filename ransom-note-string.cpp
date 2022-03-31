// Cracking the Coding Interview - Technical Questions
// Author: simranmakhijani55

// A ransom note can be formed by cutting char out of a
// magazine to form a new sentence. How would you figure
// out if a ransom note (represented as a string) can be
// formed from a given magazine (string)?

// Note: same algo can be used for cutting out words instead of characters (as required in book)

// leetcode - https://leetcode.com/problems/ransom-note/

#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    int ransomArr[26] = {0}, r = ransomNote.length(), m = magazine.length();

    if (r > m)
        return false;
    for (int i = 0; i < r; i++)
    {
        ++ransomArr[ransomNote[i] - 'a'];
    }

    for (int i = 0; i < m; i++)
    {
        if (ransomArr[magazine[i] - 'a'] > 0)
            --ransomArr[magazine[i] - 'a'];
    }

    for (int i = 0; i < r; i++)
    {
        if (ransomArr[ransomNote[i] - 'a'] != 0)
            return false;
    }
    return true;
}

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;
    bool result = canConstruct(ransomNote, magazine);
    cout << result;
    cout << endl
         << endl;
    return 0;
}