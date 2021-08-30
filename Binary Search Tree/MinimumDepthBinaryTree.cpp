#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <bits/stdc++.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* Create()
{
    int x;
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data and -1 for no node:\n");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    newnode->data = x;
    printf("Enter left child of node %d\n", x);
    newnode->left = Create();
    printf("Enter right child of node %d\n", x);
    newnode->right = Create();
    return newnode;
}
int minDepth(node* root) {
        if(!root) return 0;
        if(!(root->left)&&!(root->right)) return 1;
        if(!(root->left)) return 1+minDepth(root->right);
        if(!(root->right)) return 1+minDepth(root->left);
        
        return 1+min(minDepth(root->left), minDepth(root->right));
 }

int main() {
    struct node* root;
    root = 0;
    root = Create();
    printf("Minimum Depth of Binary Tree is: \n");
    int res = minDepth(root);
    cout<<res;
    return 0;
}