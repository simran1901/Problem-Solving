// Geeksforgeeks
// Author: simranmakhijani55
// Problem 3 - https://practice.geeksforgeeks.org/contest/interview-series-70/problems/

#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
    public:
    TrieNode *children[26];
};

TrieNode *getNode()
{
    TrieNode *pNode =  new TrieNode;
 
    for (int i = 0; i < 26; i++)
        pNode->children[i] = NULL;
 
    return pNode;
}

void insert(TrieNode *root, string key)
{
    TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
}

bool search(TrieNode *root, string key)
{
    TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    return true;
}

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        // Code here
        TrieNode* prefRoot = getNode();
        TrieNode* suffRoot = getNode();
        
        for(int i = 0; i<s1.size(); i++) {
            insert(prefRoot, s1[i]);
            reverse(s1[i].begin(), s1[i].end());
            insert(suffRoot, s1[i]);
        }
        int ans = 0;
        
        for(int i=0; i<s2.size(); i++) {
            if (search(prefRoot, s2[i])) {
                ans++;
            }
            else {
                reverse(s2[i].begin(), s2[i].end());
                if (search(suffRoot, s2[i])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};