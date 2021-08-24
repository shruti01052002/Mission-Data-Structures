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
queue<node*>q;

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
void Preorder(struct node* root)
{
    if(root==0)
    {return;}
    printf("%d->", root->data);
    Preorder(root->left);
    Preorder(root->right);
}


int main() {
    struct node* root;
    root = 0;
    root = Create();
    printf("Level Order is: \n");
    if(!root) cout<<"Tree is Empty"<<endl;
    else
    {
        q.push(root);
        while(!q.empty())
        {
            struct node* temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->right) q.push(temp->right);
             if(temp->left) q.push(temp->left);
        }
    }
    return 0;
}