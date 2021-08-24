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
stack<node*>s1, s2;
vector<int>v;
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
    printf("Zigzag Traversal is: \n");
    if(!root) cout<<"Tree is Empty"<<endl;
    else
    {
        s1.push(root);
        while(!s1.empty()||!s2.empty())
        {
            while(!s1.empty())
            {
                struct node* temp = s1.top();
                s1.pop();
                v.push_back(temp->data);
                if(temp->right) s2.push(temp->right);
                if(temp->left) s2.push(temp->left);
            }
            while(!s2.empty())
            {
                struct node* temp = s2.top();
                s2.pop();
                v.push_back(temp->data);
                if(temp->left) s1.push(temp->left);
                if(temp->right) s1.push(temp->right);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}