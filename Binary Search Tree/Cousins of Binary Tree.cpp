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
    bool res=true;
    void Inorder(TreeNode* root, int x, int y)
    {
        if(root==NULL) return;
        Inorder(root->left, x, y);
        if(root->left!=NULL&&root->right!=NULL)
        {if(root->left->val==x)
        {
            if(root->right->val==y)
                res = false;
            return;
        }
        if(root->right->val==x)
        {
            if(root->left->val==y)
                res = false;
            return;
        }
        if(root->left->val==y)
        {
            if(root->right->val==x)
                res = false;
            return;
        }
        if(root->right->val==y)
        {
            if(root->right->val==x)
                res = false;
            return;
        }}
        if(root!=NULL)
        {
            if(root->right&&!(root->left)) 
            {
                if(root->right->val==x||root->right->val==y)
                    return;
            }
            if(root->left&&!(root->right)) 
            {
                if(root->left->val==x||root->left->val==y)
                    return;
            }
        }

        Inorder(root->right, x, y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        map<int, vector<int>>mp;
        int d=0, h, k;
        Preorder(root, mp, d);
        for(auto f: mp)
        {
            h=0;
            k=0;
            if(f.second.size()>1)
            for(auto g: f.second)
            {
                if(g==x)
                h = 1;
                if(g==y)
                k = 1;
                
                if(h==1&&k==1)
                    break;
            }
            if(h==1&&k==1)
                break;
        }
        Inorder(root, x, y);
        if(h==1&&k==1)
        {
            return res;
        }
        else
        return false;
    }
};