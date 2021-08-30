#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <bits/stdc++.h>
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void Preorder(TreeNode* root, map<int, vector<int>>&mp, int d)
    {
        if(!root) return;
        mp[d].push_back(root->val);
        Preorder(root->left, mp, d+1);
        Preorder(root->right, mp, d+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        map<int, vector<int>>mp;
        int d=0, h, k;
        Preorder(root, mp, d);
        int si = mp.size();
        int i, s=0;
        for(i=0;i<mp[si-1].size();i++)
        {
            s+=mp[si-1][i];
        }
        return s;
    }
};