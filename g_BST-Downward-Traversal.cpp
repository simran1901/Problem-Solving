// Geeksforgeeks
// Author: simranmakhijani55
// Problem 1 - https://practice.geeksforgeeks.org/contest/interview-series-70/problems/

#include<bits/stdc++.h>
using namespace std;


// ***************************Given Code***************************
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
// ****************************************************************

class Solution{
    int ans = 0;
    bool flag = false;
    
    void helper(Node* node, int val) {
        if (node == NULL) return;
        if (val==0) {
            ans += node->data;
        }
        
        helper(node->left, val-1);
        helper(node->right, val+1);
    }
    void dfs(Node* node, int target) {
        if (flag==true || node==NULL) return;
        if (node->data == target) {
            flag = true;
            // dfs on target
            helper(node->left, -1);
            helper(node->right, 1);
            
            return;
        }
        
        dfs(node->left, target);
        dfs(node->right, target);
        
    }
public:
    int verticallyDownBST(Node *root,int target){
        // Code here
        dfs(root, target);
        if (!flag) ans = -1;
        return ans;
    }
};