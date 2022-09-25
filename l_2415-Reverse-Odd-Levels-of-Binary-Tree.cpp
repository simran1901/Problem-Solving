// Leetcode
// Author: simranmakhijani55
// https://leetcode.com/contest/weekly-contest-311/problems/reverse-odd-levels-of-binary-tree/

#include <bits/stdc++.h>
using namespace std;

// ***************************Given Code***************************
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// ****************************************************************

class Solution
{
    void traversal(TreeNode *r1, TreeNode *r2, int level)
    {
        if (r1 == NULL)
        {
            return;
        }
        traversal(r1->left, r2->right, level + 1);
        traversal(r1->right, r2->left, level + 1);

        if (r1 != NULL && level % 2)
            swap(r1->val, r2->val);
    }

public:
    TreeNode *reverseOddLevels(TreeNode *root)
    {
        traversal(root->left, root->right, 1);
        return root;
    }
};